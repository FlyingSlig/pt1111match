// FUNCTION: PORT1111 0x0045a5e0
// name: FUN_0045a5e0
// sig: undefined FUN_0045a5e0(void * this, uint param_1)


void __thiscall FUN_0045a5e0(void *this,uint param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b934b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00457ca0(*(void **)(*(int *)((int)this + 0xd0) + 0x10),param_1);
  this_00 = operator_new(0x310);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    uVar3 = FUN_0047fd20(iVar1);
    piVar2 = FUN_00459950(this_00,*(int *)((int)this + 0x24),param_1,uVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xb8))();
  ExceptionList = pvStack_c;
  return;
}

