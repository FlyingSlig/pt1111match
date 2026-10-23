// FUNCTION: PORT1111 0x00419170
// name: FUN_00419170
// sig: undefined4 FUN_00419170(int param_1)


undefined4 __fastcall FUN_00419170(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 5)) && (iVar1 != 7)) {
    return 0;
  }
  return 1;
}

