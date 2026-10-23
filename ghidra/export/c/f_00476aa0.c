// FUNCTION: PORT1111 0x00476aa0
// name: FUN_00476aa0
// sig: undefined4 * FUN_00476aa0(void * this, int param_1)


undefined4 * __thiscall FUN_00476aa0(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *local_4;
  
  local_4 = this;
  puVar1 = FUN_00477f20(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  this_00 = *(void **)((int)this + 0x14);
  iVar3 = *(int *)((int)this + 0x34) + 1;
  *(int *)((int)this + 0x34) = iVar3;
  param_1 = iVar3;
  FUN_00413aa0(this_00,&local_4,&param_1);
  if ((local_4 == *(void **)((int)this_00 + 4)) || (*(int *)((int)local_4 + 0x10) == 0)) {
    puVar1[1] = iVar3;
    param_1 = iVar3;
    piVar2 = FUN_00476600(*(void **)((int)this + 0x14),&param_1);
    *piVar2 = (int)puVar1;
    puVar1[4] = this;
  }
  return puVar1;
}

