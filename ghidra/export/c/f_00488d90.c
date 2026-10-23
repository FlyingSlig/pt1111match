// FUNCTION: PORT1111 0x00488d90
// name: FUN_00488d90
// sig: undefined4 FUN_00488d90(void * this, int param_1, undefined1 param_2, undefined4 param_3, undefined4 param_4)


undefined4 __thiscall
FUN_00488d90(void *this,int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  void *pvVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004baa16;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 0x44))();
  pvVar2 = operator_new(0x30);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_0047e2c0(pvVar2,1);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0x830) = pvVar2;
  bVar1 = FUN_0047e3d0(pvVar2,param_2,param_3,param_4,1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pvVar2 = operator_new(0x30);
    uStack_4 = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_0047e2c0(pvVar2,1);
    }
    uStack_4 = 0xffffffff;
    *(void **)((int)this + 0x834) = pvVar2;
    bVar1 = FUN_0047e3d0(pvVar2,param_2,param_3,param_4,1);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      *(int *)((int)this + 0x810) = param_1;
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

