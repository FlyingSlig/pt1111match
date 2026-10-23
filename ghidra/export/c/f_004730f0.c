// FUNCTION: PORT1111 0x004730f0
// name: FUN_004730f0
// sig: undefined4 FUN_004730f0(void * this, int param_1)


undefined4 __thiscall FUN_004730f0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x78);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0047f360(puVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_0047edf0(puVar1,"Dib",param_1);
  if (iVar2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    ExceptionList = local_c;
    return 0;
  }
  (**(code **)(*(int *)this + 0x1c))();
  if (*(int *)((int)this + 0x44) != 0) {
    if (*(void **)((int)this + 0x40) != (void *)0x0) {
      FUN_00478470(*(void **)((int)this + 0x40),*(int *)(*(int *)((int)this + 0x44) + 0x34),0);
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x44) + 0x34);
    piVar6 = (int *)0x0;
    pvVar3 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
    FUN_00476d40(pvVar3,iVar2,piVar6);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  puVar5 = puVar1;
  pvVar3 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
  FUN_00477600(pvVar3,(int)puVar5);
  uVar4 = FUN_004723f0(this,(int)puVar1,0,0,1);
  piVar6 = (int *)0x0;
  pvVar3 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
  FUN_00476980(pvVar3,puVar1,piVar6);
  ExceptionList = local_c;
  return uVar4;
}

