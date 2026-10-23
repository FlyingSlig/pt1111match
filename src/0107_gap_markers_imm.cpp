// Targeted SYNTHETIC namerefs for gap addresses referenced by *immediate*
// operands in the original (push/mov imm32).  Only gap starts can normalise on
// the original side (reccmp does not render offsets inside function entities),
// so only these are listed; mid-gap immediates stay raw in the matching build
// (they are runtime-only relocation candidates, see fix_branches.py docs).
//
// SYNTHETIC: PORT1111 0x004014a3
// ?gap_004014a3@@YAXXZ
// SYNTHETIC: PORT1111 0x00419130
// ?gap_00419130@@YAXXZ
// Gap start created by tools/split_overlapping_funcs.py; a catch funclet's
// immediate references it (FUN_00486593: mov eax, 0x486599).
// SYNTHETIC: PORT1111 0x00486599
// ?gap_00486599@@YAXXZ
