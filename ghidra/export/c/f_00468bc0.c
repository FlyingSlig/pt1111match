// FUNCTION: PORT1111 0x00468bc0
// name: FUN_00468bc0
// sig: undefined4 FUN_00468bc0(void * this, undefined4 param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00468bc0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9911;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (DAT_004e2c28 == 0) {
    puVar1 = operator_new(0x838);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00468c5f:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00488c50(puVar1);
    }
  }
  else if (DAT_004e2c28 == 1) {
    puVar1 = operator_new(0x858);
    local_4 = 1;
    if (puVar1 == (undefined4 *)0x0) goto LAB_00468c5f;
    puVar1 = FUN_00489790(puVar1);
  }
  else {
    if (DAT_004e2c28 != 3) goto LAB_00468c6c;
    puVar1 = operator_new(0x854);
    local_4 = 2;
    if (puVar1 == (undefined4 *)0x0) goto LAB_00468c5f;
    puVar1 = FUN_00489db0(puVar1);
  }
  *(undefined4 **)((int)this + 0x5c) = puVar1;
LAB_00468c6c:
  local_4 = 0xffffffff;
  pvVar3 = DAT_004e2c2c;
  iVar2 = (**(code **)(**(int **)((int)this + 0x5c) + 4))
                    (param_1,*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x1c),
                     *(undefined4 *)((int)this + 0x20));
  if (iVar2 == 0) {
    if (*(int **)((int)this + 0xf8) != (int *)0x0) {
      FUN_00476e50(*(int **)((int)this + 0xf8));
      if (*(int **)((int)this + 0xf8) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0xf8) + 0x10))(1);
      }
    }
    if (*(undefined4 **)((int)this + 0x5c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x5c))(1);
    }
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    ExceptionList = pvVar3;
    return 0;
  }
  _DAT_004e2c4c = *(undefined4 *)((int)this + 0x1c);
  _DAT_004e2c50 = *(undefined4 *)((int)this + 0x20);
  _DAT_004e2c44 = 0;
  _DAT_004e2c48 = 0;
  if (DAT_004e2b00 != 0) {
    iVar2 = (**(code **)(**(int **)((int)this + 0x5c) + 0x80))();
    if (iVar2 != DAT_004e2b00) {
      FUN_004681b0((int)this);
      if (*(undefined4 **)((int)this + 0x5c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x5c))(1);
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
      FUN_0046ab50("Render not valid",0);
      ExceptionList = pvVar3;
      return 0;
    }
  }
  DAT_004dd964 = (**(code **)(**(int **)((int)this + 0x5c) + 0x84))();
  *(undefined4 *)(*(int *)((int)this + 0xf8) + 0x1c) = *(undefined4 *)((int)this + 0x5c);
  if (DAT_004dd964 == 0xf) {
    DAT_004e2c98 = 0;
  }
  ExceptionList = pvVar3;
  return 1;
}

