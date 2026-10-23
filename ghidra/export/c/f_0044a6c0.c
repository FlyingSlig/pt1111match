// FUNCTION: PORT1111 0x0044a6c0
// name: FUN_0044a6c0
// sig: undefined FUN_0044a6c0(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044a6c0(int param_1)

{
  _DAT_004dc29c = *(undefined4 *)(param_1 + 0x18);
  DAT_004dc2a0 = *(undefined4 *)(param_1 + 0x48);
  DAT_004db290 = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0xc0) != 0) {
    DAT_004db294 = *(undefined4 *)(param_1 + 0xa8);
  }
  FUN_0044a590();
  return;
}

