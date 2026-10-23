// FUNCTION: PORT1111 0x0040a020
// name: FUN_0040a020
// sig: undefined FUN_0040a020(void * this, undefined4 * param_1)


void __thiscall FUN_0040a020(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_00409f80(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

