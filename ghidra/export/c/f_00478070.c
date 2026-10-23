// FUNCTION: PORT1111 0x00478070
// name: FUN_00478070
// sig: undefined4 FUN_00478070(int param_1)


undefined4 __fastcall FUN_00478070(int param_1)

{
  FUN_0047a320(param_1);
  FUN_0047a2f0(param_1);
  *(undefined2 *)(param_1 + 0x52) = 0xffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x96;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_0047a940(param_1);
  return 1;
}

