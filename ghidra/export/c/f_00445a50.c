// FUNCTION: PORT1111 0x00445a50
// name: FUN_00445a50
// sig: undefined4 FUN_00445a50(void * this, short param_1)


undefined4 __thiscall FUN_00445a50(void *this,short param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  uchar *puVar3;
  int *piVar4;
  uchar *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b82c4;
  local_c = ExceptionList;
  if (param_1 == 100) {
    ExceptionList = &local_c;
    (**(code **)(*(int *)this + 0x38))();
  }
  else if (param_1 == 0x65) {
    ExceptionList = &local_c;
    (**(code **)*DAT_004e2b20)();
    FUN_00480290((int)this);
    DAT_004dc298 = 1;
    FUN_0047c660(*(void **)((int)this + 0x24),0x2711,
                 *(undefined2 *)((int)*(void **)((int)this + 0x24) + 0x1c),0);
  }
  else {
    if (param_1 != 0x66) {
      return 0;
    }
    ExceptionList = &local_c;
    this_00 = operator_new(0x32c);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar2 = FUN_00468110(DAT_004e2b14,(undefined4 *)&param_1,"DATA\\Maps");
      iVar1 = *(int *)((int)this + 0x24);
      uVar7 = 1;
      uVar6 = 0x66;
      puVar5 = "bck";
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar3 = (uchar *)FUN_00465e00(puVar2);
      piVar4 = FUN_004472e0(this_00,iVar1,0,puVar3,puVar5,uVar6,uVar7);
    }
    local_4 = 0xffffffff;
    if (this_00 != (void *)0x0) {
      FUN_00465e40((undefined4 *)&param_1);
    }
    (**(code **)(*piVar4 + 0xb8))();
  }
  ExceptionList = local_c;
  return 1;
}

