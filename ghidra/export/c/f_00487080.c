// FUNCTION: PORT1111 0x00487080
// name: FUN_00487080
// sig: int FUN_00487080(void * this, undefined4 param_1, undefined4 param_2)


int __thiscall FUN_00487080(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *unaff_EBX;
  int iStack_18;
  undefined **local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba8a8;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x38);
  local_14 = &PTR_FUN_004c376c;
  ExceptionList = &pvStack_c;
  local_10 = piVar1;
  (**(code **)(*(int *)((int)this + 0x38) + 4))();
  uStack_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar1 + 8))();
    ExceptionList = pvStack_c;
    return -0x7ffbfe10;
  }
  puVar2 = (undefined4 *)FUN_004867b0(this,1);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar1 + 8))();
    ExceptionList = pvStack_c;
    return -0x7fffbffb;
  }
  iVar3 = FUN_00486730((int *)*puVar2,&iStack_18);
  if (iVar3 < 0) {
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar1 + 8))();
    ExceptionList = pvStack_c;
    return iVar3;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x18))();
  if (iStack_18 != 0) {
    iVar3 = FUN_00486e00(this,(int *)*puVar2,0);
    if (iVar3 < 0) {
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar1 + 8))();
      ExceptionList = pvStack_c;
      return iVar3;
    }
    (**(code **)(*(int *)this + 0x10))();
  }
  iVar3 = (**(code **)(*(int *)*puVar2 + 0x30))((int *)*puVar2,0,param_1,param_2);
  puVar2[1] = 0;
  local_14 = (undefined **)0xffffffff;
  if (iVar3 < 0) {
    (**(code **)(*piVar1 + 8))();
    ExceptionList = unaff_EBX;
    return iVar3;
  }
  (**(code **)(*piVar1 + 8))();
  ExceptionList = unaff_EBX;
  return 0;
}

