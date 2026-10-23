// FUNCTION: PORT1111 0x0047a320
// name: FUN_0047a320
// sig: undefined FUN_0047a320(int param_1)


void __fastcall FUN_0047a320(int param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfd;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  SetRectEmpty((LPRECT)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 100;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 2 | 0x60;
  *(undefined2 *)(param_1 + 0x34) = 0xffff;
  return;
}

