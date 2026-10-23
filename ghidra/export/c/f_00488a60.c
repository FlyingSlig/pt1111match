// FUNCTION: PORT1111 0x00488a60
// name: FUN_00488a60
// sig: undefined4 FUN_00488a60(int param_1)


undefined4 __fastcall FUN_00488a60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return 0;
  }
  uVar1 = FUN_00496340(param_1 + 8);
  return uVar1;
}

