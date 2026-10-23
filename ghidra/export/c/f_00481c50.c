// FUNCTION: PORT1111 0x00481c50
// name: FUN_00481c50
// sig: undefined FUN_00481c50(void * param_1)


void __fastcall FUN_00481c50(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x68);
  if (iVar1 != 0) {
    FUN_00481930(param_1,0,*(int *)(*(int *)(iVar1 + 0x2ac) + 8) - *(int *)(iVar1 + 0x20));
  }
  return;
}

