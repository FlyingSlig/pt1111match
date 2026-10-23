// FUNCTION: PORT1111 0x0047a2f0
// name: FUN_0047a2f0
// sig: undefined FUN_0047a2f0(int param_1)


void __fastcall FUN_0047a2f0(int param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfd;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  SetRectEmpty((LPRECT)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  return;
}

