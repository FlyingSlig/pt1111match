// FUNCTION: PORT1111 0x0046fdc0
// name: FUN_0046fdc0
// sig: undefined4 FUN_0046fdc0(void * this, int param_1)


undefined4 __thiscall FUN_0046fdc0(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9d58;
  local_c = ExceptionList;
  iVar4 = *(int *)((int)this + 0x44);
  ExceptionList = &local_c;
  pvVar1 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
  FUN_00476880(pvVar1,iVar4);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((int)this + 0xb4);
  }
  puVar2 = FUN_00466fd0((void *)((int)this + 0x94),&param_1,(undefined4 *)((int)this + 0xa4));
  local_4 = 0;
  puVar3 = (uchar *)FUN_00465e00(puVar2);
  iVar4 = FUN_0047e9b0(*(void **)((int)this + 0x44),puVar3,uVar5);
  local_4 = 0xffffffff;
  FUN_00465e40(&param_1);
  if (iVar4 == 0) {
    (**(code **)(*(int *)this + 0x1c))();
    if (*(int *)((int)this + 0x44) != 0) {
      if (*(void **)((int)this + 0x40) != (void *)0x0) {
        FUN_00478470(*(void **)((int)this + 0x40),*(int *)(*(int *)((int)this + 0x44) + 0x34),0);
      }
      iVar4 = *(int *)(*(int *)((int)this + 0x44) + 0x34);
      piVar6 = (int *)0x0;
      pvVar1 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
      FUN_00476d40(pvVar1,iVar4,piVar6);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = *(int *)((int)this + 0x44);
  pvVar1 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
  FUN_004770c0(pvVar1,iVar4);
  ExceptionList = local_c;
  return 1;
}

