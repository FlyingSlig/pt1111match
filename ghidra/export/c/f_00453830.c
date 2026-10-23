// FUNCTION: PORT1111 0x00453830
// name: FUN_00453830
// sig: undefined4 FUN_00453830(int param_1)


undefined4 __cdecl FUN_00453830(int param_1)

{
  if ((*(byte *)(param_1 + 0x3c) & 4) != 0) {
    return *(undefined4 *)(param_1 + 0xf0);
  }
  return 0;
}

