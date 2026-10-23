// FUNCTION: PORT1111 0x00476a10
// name: FUN_00476a10
// sig: undefined4 FUN_00476a10(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00476a10(void *this,int param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  bool bVar3;
  void *local_4;
  
  bVar3 = param_2 != -1;
  iVar1 = param_2;
  if (param_2 == -1) {
    iVar1 = *(int *)((int)this + 0x34) + 1;
    *(int *)((int)this + 0x34) = iVar1;
  }
  this_00 = *(void **)((int)this + 0x14);
  param_2 = iVar1;
  local_4 = this;
  FUN_00413aa0(this_00,&local_4,&param_2);
  if ((local_4 != *(void **)((int)this_00 + 4)) && (*(int *)((int)local_4 + 0x10) != 0)) {
    return 0xffffffff;
  }
  *(int *)(param_1 + 4) = iVar1;
  param_2 = iVar1;
  piVar2 = FUN_00476600(*(void **)((int)this + 0x14),&param_2);
  *piVar2 = param_1;
  *(void **)(param_1 + 0x10) = this;
  if (bVar3) {
    FUN_004751b0((int)this);
  }
  return *(undefined4 *)(param_1 + 4);
}

