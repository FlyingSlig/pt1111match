// FUNCTION: PORT1111 0x00434e40
// name: FUN_00434e40
// sig: undefined4 FUN_00434e40(int param_1)


undefined4 __fastcall FUN_00434e40(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00414c30(DAT_004e240c);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  if (*(int *)(iVar1 + 0x7c) != 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar3 = iVar1;
  if (*(int *)(param_1 + 0x18) == 0) {
    DAT_004e0864 = DAT_004e0864 + 1;
    *(int *)(iVar1 + 0xc0) = DAT_004e0864;
    uVar4 = 1;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0x10))(iVar1,1);
    this = operator_new(0x18);
    local_c = (void *)0x1;
    if (this != (void *)0x0) {
      uVar2 = FUN_0045c3e0(this,0x14,*(undefined4 *)(param_1 + 0x14),0);
      goto LAB_00434f22;
    }
  }
  else {
    if (*(int *)(iVar1 + 0xc4) == *(int *)(iVar1 + 0xc0)) {
      ExceptionList = local_c;
      return 1;
    }
    *(int *)(iVar1 + 0xc0) = *(int *)(iVar1 + 0xc4);
    uVar4 = 1;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0x10))(iVar1,1);
    this = operator_new(0x18);
    local_c = (void *)0x0;
    if (this != (void *)0x0) {
      uVar2 = FUN_0045c3e0(this,0x14,*(undefined4 *)(param_1 + 0x14),1);
      goto LAB_00434f22;
    }
  }
  uVar2 = 0;
LAB_00434f22:
  local_c = (void *)0xffffffff;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0xc))(uVar2,iVar3,uVar4,this);
  ExceptionList = local_c;
  return 1;
}

