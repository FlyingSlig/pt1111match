// FUNCTION: PORT1111 0x00422ad0
// name: FUN_00422ad0
// sig: undefined4 FUN_00422ad0(void * this, void * param_1)


undefined4 __thiscall FUN_00422ad0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b6d96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00421fa0((int)this);
  FUN_00424810(param_1,(char *)((int)this + 0x30));
  iVar1 = FUN_00424310((int)param_1);
  *(int *)((int)this + 0x34) = iVar1;
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(&DAT_004d6428 + iVar1 * 4);
  uVar2 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0x38) = uVar2;
  iVar1 = FUN_00424310((int)param_1);
  FUN_00422250(this,iVar1);
  if (0x12 < *(int *)((int)param_1 + 8)) {
    uVar2 = FUN_00424310((int)param_1);
    *(undefined4 *)((int)this + 0x210) = uVar2;
    uVar2 = FUN_00424310((int)param_1);
    *(undefined4 *)((int)this + 0x214) = uVar2;
  }
  iVar1 = FUN_00422640((int)this);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (*(undefined4 **)((int)this + 0x20c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x20c))(1);
    *(undefined4 *)((int)this + 0x20c) = 0;
  }
  pvVar3 = operator_new(0x18);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0043d470(pvVar3,0,this);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x20c) = puVar4;
  if (*(undefined4 **)((int)this + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x2c))(1);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  pvVar3 = operator_new(0x18);
  uStack_4 = 1;
  if (pvVar3 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00443cb0(pvVar3,*(undefined4 *)(DAT_004e2404 + 0x10c),
                         *(undefined4 *)(DAT_004e2404 + 0x110));
  }
  uStack_4 = 0xffffffff;
  *(int *)((int)this + 0x2c) = iVar1;
  FUN_00443cd0(iVar1);
  ExceptionList = local_c;
  return 1;
}

