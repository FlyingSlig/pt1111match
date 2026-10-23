// FUNCTION: PORT1111 0x00431b30
// name: FUN_00431b30
// sig: undefined4 FUN_00431b30(int param_1)


undefined4 __fastcall FUN_00431b30(int param_1)

{
  if ((*(int *)(param_1 + 0xc0) == 0) && (*(int *)(param_1 + 0xc4) == 0)) {
    return 0;
  }
  return 1;
}

