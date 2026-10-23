# Included by top-level Makefile — MSVC 7.1 via wibo/wine.
SHELL := /bin/bash
ROOT := $(CURDIR)
BUILD := build/obj
OUT := build/Port1111.exe

# Interpreter for the tools/*.py pipeline steps. Needs capstone + pefile;
# override to use a virtualenv:  make PYTHON=$PWD/.venv/bin/python
PYTHON ?= python3

# Recovered from the original binary (Phase 1, Gate B):
#   /SUBSYSTEM:WINDOWS,4.00  /STACK:0x200000,0x1000  FileAlignment 0x1000
#   /MT /GS, no /GL, static CRT, C++ with RTTI (/GR on — RTTI in binary)
# Optimization: TODO(phase-3 first match): pin down /O1 vs /O2 empirically.
CLFLAGS := /nologo /MT /GS /GR /EHsc /O2 /Z7 /W3 /Isrc
LINKFLAGS := /nologo /SUBSYSTEM:WINDOWS,4.00 /STACK:0x200000,0x1000 \
             /DEBUG /DEBUGTYPE:CV /INCREMENTAL:NO

# Libraries (order = original import order where known)
LIBS := winmm.lib version.lib ws2_32.lib kernel32.lib user32.lib gdi32.lib \
        advapi32.lib ole32.lib oleaut32.lib dsound.lib ddraw.lib dxguid.lib \
        libcmt.lib libcpmt.lib oldnames.lib

define COMPILE_C
	@echo "  CL      $(notdir $(1))" && \
	. tools/msvc-env.sh && cd $(ROOT) && pt_cl $(CLFLAGS) /TC /c "$(1)" /Fo"$(2)"
endef

define COMPILE_CXX
	@echo "  CLXX    $(notdir $(1))" && \
	. tools/msvc-env.sh && cd $(ROOT) && pt_cl $(CLFLAGS) /TP /c "$(1)" /Fo"$(2)"
endef

RC_OBJ := ../../rsrc/Port1111.res

define LINK
	@echo "  LINK    $(notdir $(2))" && \
	printf '%s\n' $(notdir $(1)) > $(BUILD)/link.rsp && \
	. tools/msvc-env.sh && cd $(BUILD) && pt_link $(LINKFLAGS) \
	  @link.rsp \
	  $(addprefix /LIBPATH:,$(ZLIBS)) $(LIBS) \
	  "$(RC_OBJ)" \
	  /OUT:"$(ROOT)/$(2)" /PDB:"$(ROOT)/$(2:.exe=.pdb)" \
	  /IMPLIB:"$(ROOT)/$(2:.exe=.lib)" /MAP:"$(ROOT)/$(2:.exe=.map)"
endef

# LIB paths as Z:-style (wine), computed from tools/msvc-env.sh layout
ZLIBS := Z:$(ROOT)/build/importlibs Z:$(ROOT)/tools/msvc71/Vc7/lib Z:$(ROOT)/tools/psdk/Lib Z:$(ROOT)/tools/dxsdk/Lib

# Raw-emit batch files are all __declspec(naked) inline asm, so optimization
# level does not affect their bytes. Compile them at /Od so cl puts all
# functions in ONE .text section (at /O2 it splits each function into its own
# COMDAT section, which makes link.exe 7.1 under wine hit LNK1104 TEMPFILE).
define COMPILE_CXX_OD
	@echo "  CLXX    $(notdir $(1))" && \
	. tools/msvc-env.sh && cd $(ROOT) && pt_cl /nologo /MT /GS /GR /EHsc /Od /Z7 /W3 /Isrc /TP /c "$(1)" /Fo"$(2)"
endef
