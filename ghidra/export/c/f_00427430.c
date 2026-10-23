// FUNCTION: PORT1111 0x00427430
// name: FUN_00427430
// sig: undefined4 FUN_00427430(int param_1)


undefined4 __fastcall FUN_00427430(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x14);
}

