// FUNCTION: PORT1111 0x00412ee0
// name: FUN_00412ee0
// sig: undefined FUN_00412ee0(void * this, int param_1)


void __thiscall FUN_00412ee0(void *this,int param_1)

{
  undefined4 *puVar1;
  void *unaff_EBX;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b6156;
  pvStack_c = ExceptionList;
  piVar2 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (*(int **)((int)this + 0x74) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)((int)this + 0x74) + 0x30))(1);
  }
  if ((param_1 == 0x35) || (param_1 == 0x50)) {
    puVar1 = operator_new(0x14);
    uStack_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_0043a500(puVar1);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x2c))();
  }
  else {
    puVar1 = operator_new(0x2c);
    uStack_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_0043a740(puVar1);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x2c))();
  }
  *(int **)((int)this + 0x74) = piVar2;
  (**(code **)(*piVar2 + 0x34))(param_1);
  ExceptionList = unaff_EBX;
  return;
}

