// FUNCTION: PORT1111 0x00412340
// name: FUN_00412340
// sig: undefined FUN_00412340(void * this, int param_1)


void __thiscall FUN_00412340(void *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  iVar3 = *(int *)(*(int *)((int)this + 0x50) + 0x14);
  if (iVar3 == 0x24) {
    return;
  }
  if (iVar3 == 0x44) {
    return;
  }
  if (*(int *)((int)this + 0x7c) != 0) {
    return;
  }
  if ((*(int *)((int)this + 0x58) < param_1) &&
     (param_1 <= *(int *)(*(int *)((int)this + 0x50) + 0x22c))) {
    iVar3 = (**(code **)(*(int *)this + 0x88))();
    iVar3 = *(int *)(iVar3 + 0x34);
    iVar5 = 1;
  }
  else {
    if (*(int *)((int)this + 0x58) <= param_1) goto LAB_004123b8;
    iVar3 = (**(code **)(*(int *)this + 0x88))();
    iVar3 = *(int *)(iVar3 + 0x34);
    iVar5 = -1;
  }
  FUN_0043ae30(DAT_004e2408,(int)*(short *)(*(int *)((int)this + 0x40) + 0x4e),
               (int)*(short *)(*(int *)((int)this + 0x40) + 0x4c),iVar5,iVar3);
LAB_004123b8:
  bVar1 = false;
  bVar2 = false;
  if ((param_1 < *(int *)((int)this + 0x58)) &&
     (bVar1 = true, *(int *)((int)this + 0x58) == *(int *)(*(int *)((int)this + 0x50) + 0x22c))) {
    iVar3 = 1;
    pvVar4 = (void *)(**(code **)(*(int *)this + 0x88))();
    FUN_004225a0(pvVar4,iVar3);
  }
  if (*(int *)((int)this + 0x58) < param_1) {
    if (param_1 == *(int *)(*(int *)((int)this + 0x50) + 0x22c)) {
      iVar3 = -1;
      pvVar4 = (void *)(**(code **)(*(int *)this + 0x88))();
      FUN_004225a0(pvVar4,iVar3);
    }
    if (*(int *)((int)this + 0x58) < param_1) {
      bVar2 = true;
    }
  }
  if (param_1 <= *(int *)(*(int *)((int)this + 0x50) + 0x22c)) {
    *(int *)((int)this + 0x58) = param_1;
  }
  if (((bVar1) && (*(int *)((int)this + 0x58) < 0x4b)) && (iVar3 = _rand(), 0x3fff < iVar3)) {
    FUN_004122a0(this,1);
  }
  if (((bVar2) && (0x4b < *(int *)((int)this + 0x58))) && (iVar3 = _rand(), 0x3fff < iVar3)) {
    FUN_004122a0(this,0);
  }
  FUN_00445030(*(void **)((int)this + 0xb0),0x44a);
  return;
}

