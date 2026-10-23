# pt1111match — MSVC 7.1 matching build
# Uses tools/msvc-env.sh (wibo for cl, wine for link).

include tools/build.mk

.DEFAULT_GOAL := all

# Every source under src/ becomes an obj; order matters for link
# (recovered TU order is applied in src/NN_*.cpp naming: sorted = link order).
SRCS := $(sort $(wildcard src/*.cpp) $(wildcard src/*.c))
OBJS := $(patsubst src/%.cpp,$(BUILD)/%.obj,$(patsubst src/%.c,$(BUILD)/%.obj,$(SRCS)))

# every object depends on the generated declarations header
$(OBJS): src/pt1111_funcs.h src/pt1111_funcs_extra.h src/pt_aliases.h src/pt_stl_copy_decl.h

all: $(OUT)

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/%_batch_raw.obj: src/%_batch_raw.cpp | $(BUILD)
	$(call COMPILE_CXX_OD,$<,$@)

$(BUILD)/%.obj: src/%.cpp | $(BUILD)
	$(call COMPILE_CXX,$<,$@)

$(BUILD)/%.obj: src/%.c | $(BUILD)
	$(call COMPILE_C,$<,$@)

# The DLL descriptors now sit just before the original import-table range
# (the data-layout trim moved the CRT/compiler data out of it), so the default
# is the verbatim install at 0xd3b80.  Set IMPORT_KEEP_TABLES=1 to rebuild
# equivalent tables at our own RVA instead (diagnostic fallback).
# IMPORT_EXTRAS=1 adds the 14 extra CRT imports for a runtime build.
IMPORT_EXTRA_FLAG := $(if $(filter 1,$(IMPORT_EXTRAS)),--keep-extras,)
DATA_OVERLAY ?= 1
IMPORT_KEEP_TABLES_FLAG := $(if $(filter 1,$(IMPORT_KEEP_TABLES)),--keep-tables,)

$(OUT): $(OBJS) rsrc/Port1111.res src/pt_alias_map.txt src/pt_callee_map.txt src/pt_manual_callee_map.txt src/pt_string_map.txt build/importlibs/dsound.lib tools/rebuild_imports.py tools/fix_pe_dirs.py tools/compact_rdata_prologue.py tools/patch_pdb_data.py tools/pack_rdata_scaffold_obj.py tools/overlay_rdata_ranges.py tools/overlay_data_sections.py
	$(PYTHON) tools/pack_rdata_scaffold_obj.py build/obj/0099a_globals_rdata.obj
	$(PYTHON) tools/patch_obj_syms.py $(OBJS)
	$(PYTHON) tools/patch_obj_align.py $(OBJS)
	$(call LINK,$(OBJS),$@)
	$(PYTHON) tools/fix_pe_dirs.py --in "$@" --out "$@"
	$(PYTHON) tools/rebuild_imports.py $(IMPORT_EXTRA_FLAG) $(IMPORT_KEEP_TABLES_FLAG) --no-relocate --in "$@" --out "$@"
	$(PYTHON) tools/compact_rdata_prologue.py --in "$@" --out "$@" --start 0xbc3e0 --target 0xbc3a0 --map "$(OUT:.exe=.map)"
	$(PYTHON) tools/patch_pdb_data.py --pdb "$(OUT:.exe=.pdb)" --exe "$@" --lo 0xbc3e0 --hi 0xd3af0 --delta 0x40
	$(PYTHON) tools/overlay_rdata_ranges.py --in "$@" --out "$@"
	$(if $(filter 1,$(DATA_OVERLAY)),$(PYTHON) tools/overlay_data_sections.py --in "$@" --out "$@")

# Custom import library: DSOUND DirectSoundCreate8 by ordinal 11 (NONAME).
build/importlibs/dsound.lib: tools/gen_import_libs.py
	. tools/msvc-env.sh && $(PYTHON) tools/gen_import_libs.py

# Import sentinel (pins the IAT order); regenerate if the tool changes.
src/00000_import_order.cpp: tools/gen_import_sentinel.py ghidra/export/imports.tsv
	$(PYTHON) tools/gen_import_sentinel.py

# Runtime test build: same image with raw cross-gap relative branches re-targeted
# (costs match score - the patched bytes differ from the original - so it is a
# separate artifact; the match report always uses $(OUT)).
runtime: $(OUT)
	$(PYTHON) tools/fix_branches.py $(OUT)

# Regenerate the stub skeleton after adding/removing matched functions.
stubs:
	$(PYTHON) tools/gen_stubs.py

# Verify toolchain / python / original-binary prerequisites.
check:
	tools/check_env.sh

# Rebuild the resource object from rsrc/Port1111.rc (Phase 4).
rsrc:
	. tools/msvc-env.sh && cd rsrc && wine "$$VC7/bin/rc.exe" Port1111.rc && (mv -f Port1111.RES Port1111.res 2>/dev/null || true)
	$(PYTHON) tools/add_cursor.py

match: $(OUT)
	tools/match.sh

clean:
	rm -rf $(BUILD) build/Port1111.pdb build/Port1111.exe.map

.PHONY: all match clean stubs rsrc check
