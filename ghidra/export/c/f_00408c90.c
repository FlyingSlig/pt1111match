// FUNCTION: PORT1111 0x00408c90
// name: FUN_00408c90
// sig: undefined FUN_00408c90(void * this, undefined4 param_1)


void __thiscall FUN_00408c90(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  undefined4 local_4;
  
  local_8 = *(int *)((int)this + 0x11c) + 1;
  *(int *)((int)this + 0x11c) = local_8;
  iVar1 = *(int *)((int)this + 0x108);
  local_4 = param_1;
  iVar2 = FUN_00408810(iVar1,*(undefined4 *)(iVar1 + 4),&local_8);
  FUN_00408bd0((void *)((int)this + 0x104),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

