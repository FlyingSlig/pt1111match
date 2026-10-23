// FUNCTION: PORT1111 0x004456a0
// name: FUN_004456a0
// sig: undefined FUN_004456a0(void * this, int param_1)


void __thiscall FUN_004456a0(void *this,int param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b8248;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x18) + 4))();
  iVar1 = *(int *)((int)this + 0x38);
  uStack_4 = 0;
  param_1 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_00445600((void *)((int)this + 0x34),1);
  *(int *)(iVar1 + 4) = param_1;
  **(int **)(param_1 + 4) = param_1;
  SetEvent(*(HANDLE *)((int)this + 0xc));
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + 0x18) + 8))();
  ExceptionList = pvStack_c;
  return;
}

