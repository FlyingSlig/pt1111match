// FUNCTION: PORT1111 0x004054c0
// name: FUN_004054c0
// sig: undefined4 FUN_004054c0(void * this, int param_1)


undefined4 __thiscall FUN_004054c0(void *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b598b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0xcc) = uVar1;
  FUN_00424310(param_1);
  FUN_00424310(param_1);
  pvVar2 = operator_new(0x40);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0045c7f0(pvVar2,*(undefined4 *)((int)this + 0x10));
  }
  pvVar2 = *(void **)(*(int *)((int)this + 0x50) + 0x180);
  local_4 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0x60) + 0x18))
            (param_1,this,puVar3,*(undefined4 *)(*(int *)((int)this + 0x50) + 0x14));
  ExceptionList = pvVar2;
  return 1;
}

