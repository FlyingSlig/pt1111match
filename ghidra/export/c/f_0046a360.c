// FUNCTION: PORT1111 0x0046a360
// name: FUN_0046a360
// sig: undefined4 FUN_0046a360(void * this, int param_1)


undefined4 __thiscall FUN_0046a360(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9b58;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xf4) != param_1) {
    ExceptionList = &local_c;
    *(int *)((int)this + 0xf4) = param_1;
    FUN_00484110((int)DAT_004e2b10);
    FUN_00466b20(&param_1,(undefined4 *)((int)this + 0x38));
    local_4 = 0;
    FUN_00468e50((int)this);
    iVar1 = FUN_00469b00(this);
    if (iVar1 == 0) {
      local_4 = 0xffffffff;
      FUN_00465e40(&param_1);
      ExceptionList = local_c;
      return 0;
    }
    (**(code **)(**(int **)((int)this + 0x5c) + 0x44))();
    iVar1 = **(int **)((int)this + 0x5c);
    pvVar3 = *(void **)((int)this + 0x20);
    uVar2 = (**(code **)(*DAT_004e2b10 + 0x3c))
                      (*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x1c),pvVar3,
                       DAT_004e2c2c);
    iVar1 = (**(code **)(iVar1 + 4))(uVar2);
    if (iVar1 == 0) {
      FUN_00465e40((undefined4 *)&stack0xfffffff0);
      ExceptionList = pvVar3;
      return 0;
    }
    FUN_00466a50((undefined4 *)((int)this + 0x38),(undefined4 *)&stack0xfffffff0);
    (**(code **)(*DAT_004e2b10 + 0x4c))();
    FUN_004845e0(DAT_004e2b10);
    local_4 = 0xffffffff;
    FUN_00465e40(&param_1);
  }
  ExceptionList = local_c;
  return 1;
}

