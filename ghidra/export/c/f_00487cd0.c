// FUNCTION: PORT1111 0x00487cd0
// name: FUN_00487cd0
// sig: undefined4 FUN_00487cd0(void * this, ushort param_1)


undefined4 __thiscall FUN_00487cd0(void *this,ushort param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x24);
  if ((iVar4 != 0) && (*(int *)((int)this + 4) != 0)) {
    if (*(int *)((int)this + 0x2c) == 0) {
      FUN_0047da00(*(void **)(*(int *)((int)this + 4) + 0x24),iVar4,*(int **)((int)this + 0x28),1);
    }
    else {
      FUN_0047cb40(iVar4);
    }
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  pvVar2 = (void *)FUN_00468ef0(DAT_004e2b14,param_1);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    FUN_0047cb70((int)pvVar2);
    *(void **)((int)this + 0x24) = pvVar2;
    return 1;
  }
  bVar1 = FUN_00466ab0((void *)((int)pvVar2 + 0x14),"");
  if (CONCAT31(extraout_var,bVar1) != 0) {
    puVar3 = FUN_0047c3c0(pvVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    (**(code **)(**(int **)((int)DAT_004e2b14 + 0x5c) + 0x34))
              (puVar3,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),0);
    FUN_0040ff50();
    (**(code **)*puVar3)(1);
  }
  iVar4 = FUN_0047e030(*(void **)(*(int *)((int)this + 4) + 0x24),(int)pvVar2,
                       *(int **)((int)this + 0x28),0);
  if (iVar4 == 0) {
    return 0;
  }
  *(void **)((int)this + 0x24) = pvVar2;
  return 1;
}

