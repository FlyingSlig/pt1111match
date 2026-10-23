// FUNCTION: PORT1111 0x0040be30
// name: FUN_0040be30
// sig: undefined FUN_0040be30(void * this, undefined4 * param_1)


void __thiscall FUN_0040be30(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_0040bd90(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

