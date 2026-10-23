// FUNCTION: PORT1111 0x0045a5b0
// name: FUN_0045a5b0
// sig: undefined FUN_0045a5b0(int param_1)


void __fastcall FUN_0045a5b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00457c20(*(int *)(*(int *)(param_1 + 0xd0) + 0x10));
  iVar1 = iVar1 + -3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FUN_00481930((void *)(param_1 + 0x4c),0,iVar1);
  return;
}

