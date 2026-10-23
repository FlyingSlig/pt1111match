// FUNCTION: PORT1111 0x0044e9d0
// name: FUN_0044e9d0
// sig: int FUN_0044e9d0(void * this, uchar * param_1, int param_2)


int __thiscall FUN_0044e9d0(void *this,uchar *param_1,int param_2)

{
  uchar *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_2c;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8bc0;
  local_c = ExceptionList;
  if (DAT_004e2686 == '\0') {
    return 0;
  }
  ExceptionList = &local_c;
  local_2c = FUN_0044d850(this,(char *)param_1);
  if (local_2c != 0) {
    ExceptionList = local_c;
    return local_2c;
  }
  iVar2 = FUN_00486430((int)this + 0x1c);
  if (iVar2 != 0) {
    iVar2 = FUN_00486530((void *)((int)this + 0x1c),puVar1);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (((param_2 < 0) || (param_2 < 2)) || (param_2 != 0xc)) {
      uVar5 = 0xc0;
    }
    else {
      uVar5 = 0x80;
    }
    iVar2 = FUN_004879e0(&DAT_004e2b2c,(uint)&local_2c,*(int *)(iVar2 + 4),uVar5,DAT_004c5e2c,
                         DAT_004c5e30,DAT_004c5e34,DAT_004c5e38,6);
    if (iVar2 < 0) {
      ExceptionList = local_c;
      return 0;
    }
    goto LAB_0044ebf9;
  }
  FUN_00403340(DAT_004e2b14,&param_1);
  local_4 = 0;
  thunk_FUN_00466040(&param_1,"data\\som\\fx\\");
  thunk_FUN_00466040(&param_1,(char *)puVar1);
  uVar5 = DAT_004c5e2c;
  uVar7 = DAT_004c5e30;
  uVar8 = DAT_004c5e34;
  uVar9 = DAT_004c5e38;
  if (param_2 < 0) {
LAB_0044eb81:
    uVar10 = 6;
    uVar6 = 0xc0;
    iVar4 = 1;
    iVar2 = FUN_00465e00(&param_1);
  }
  else if (param_2 < 2) {
    uVar10 = 6;
    uVar6 = 0xc0;
    iVar4 = 1;
    iVar2 = FUN_00465e00(&param_1);
  }
  else {
    if (param_2 != 0xc) goto LAB_0044eb81;
    uVar10 = 6;
    uVar6 = 0x80;
    iVar4 = 1;
    iVar2 = FUN_00465e00(&param_1);
  }
  iVar2 = FUN_00487740(&DAT_004e2b2c,(uint)&local_2c,iVar2,iVar4,uVar6,uVar5,uVar7,uVar8,uVar9,
                       uVar10);
  local_4 = 0xffffffff;
  if (iVar2 < 0) {
    FUN_00465e40(&param_1);
    ExceptionList = local_c;
    return 0;
  }
  FUN_00465e40(&param_1);
LAB_0044ebf9:
  FUN_004017a0(local_28,(char *)puVar1);
  local_4 = 1;
  piVar3 = FUN_0044e860(this,local_28);
  *piVar3 = local_2c;
  FUN_0044d7b0((int)local_28);
  ExceptionList = local_c;
  return local_2c;
}

