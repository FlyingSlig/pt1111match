// FUNCTION: PORT1111 0x004040b0
// name: FUN_004040b0
// sig: undefined4 FUN_004040b0(int param_1)


undefined4 __fastcall FUN_004040b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  if ((iVar1 != 2) && (iVar1 != 1)) {
    return 0;
  }
  return 1;
}

