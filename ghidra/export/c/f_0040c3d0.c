// FUNCTION: PORT1111 0x0040c3d0
// name: FUN_0040c3d0
// sig: uint FUN_0040c3d0(void * this, undefined4 * param_1)


uint __thiscall FUN_0040c3d0(void *this,undefined4 *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5db9;
  local_c = ExceptionList;
  if (5 < (int)param_1) {
    ExceptionList = &local_c;
    param_1 = operator_new(0x50);
    local_4 = 0;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,0,0x1e,1,*(undefined4 *)((int)this + 0x44));
    iVar2 = *(int *)((int)this + 0x14);
    this_00 = (void *)((int)this + 0x10);
    iVar1 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
    FUN_0040bd90(this_00,1);
    *(int *)(iVar2 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_1 = operator_new(0x50);
    local_4 = 1;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,-0x1e,0x1e,2,*(undefined4 *)((int)this + 0x44));
    iVar2 = *(int *)((int)this + 0x14);
    iVar1 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
    FUN_0040bd90(this_00,1);
    *(int *)(iVar2 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_1 = operator_new(0x50);
    local_4 = 2;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,-0x3c,0x1e,3,*(undefined4 *)((int)this + 0x44));
    iVar2 = *(int *)((int)this + 0x14);
    iVar1 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
    FUN_0040bd90(this_00,1);
    *(int *)(iVar2 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    goto LAB_0040c77d;
  }
  switch((int)param_1 - 2U) {
  case 0:
    ExceptionList = &local_c;
    param_1 = operator_new(0x50);
    local_4 = 3;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,0,0x1e,1,*(undefined4 *)((int)this + 0x44));
    FUN_0040be30((void *)((int)this + 0x10),&param_1);
    param_1 = operator_new(0x50);
    local_4 = 4;
    if (param_1 == (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((int)this + 0x44);
      param_1 = (undefined4 *)0x0;
      iVar2 = 1;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
      uVar3 = *(undefined4 *)((int)this + 0x44);
      iVar2 = 1;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    param_1 = operator_new(0x50);
    local_4 = 5;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,0,0x1e,1,*(undefined4 *)((int)this + 0x44));
    FUN_0040be30((void *)((int)this + 0x10),&param_1);
    param_1 = operator_new(0x50);
    local_4 = 6;
    if (param_1 == (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((int)this + 0x44);
      param_1 = (undefined4 *)0x0;
      iVar2 = 2;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
      uVar3 = *(undefined4 *)((int)this + 0x44);
      iVar2 = 2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    param_1 = operator_new(0x50);
    local_4 = 7;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,0,0x1e,1,*(undefined4 *)((int)this + 0x44));
    FUN_0040be30((void *)((int)this + 0x10),&param_1);
    param_1 = operator_new(0x50);
    local_4 = 8;
    if (param_1 == (undefined4 *)0x0) {
LAB_0040c754:
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    goto LAB_0040c756;
  case 3:
    ExceptionList = &local_c;
    param_1 = operator_new(0x50);
    local_4 = 9;
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_0040bb90(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0040b990(param_1,0,0,0x1e,2,*(undefined4 *)((int)this + 0x44));
    FUN_0040be30((void *)((int)this + 0x10),&param_1);
    param_1 = operator_new(0x50);
    local_4 = 10;
    if (param_1 == (undefined4 *)0x0) goto LAB_0040c754;
    param_1 = FUN_0040bb90(param_1);
LAB_0040c756:
    uVar3 = *(undefined4 *)((int)this + 0x44);
    iVar2 = 3;
    break;
  default:
    return (int)param_1 - 2U & 0xffffff00;
  }
  local_4 = 0xffffffff;
  FUN_0040b990(param_1,0,-0x1e,0x1e,iVar2,uVar3);
  FUN_0040be30((void *)((int)this + 0x10),&param_1);
LAB_0040c77d:
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffa6;
  *(undefined4 *)((int)this + 0x28) = 0x1e;
  *(undefined4 *)((int)this + 0x2c) = 3;
  *(undefined4 *)((int)this + 0x34) = 0xffffffe2;
  ExceptionList = local_c;
  return 1;
}

