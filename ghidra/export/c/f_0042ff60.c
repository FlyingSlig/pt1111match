// FUNCTION: PORT1111 0x0042ff60
// name: FUN_0042ff60
// sig: undefined4 FUN_0042ff60(int param_1)


undefined4 __fastcall FUN_0042ff60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 *puVar6;
  int *piVar7;
  void *this;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  void *pvVar5;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7416;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00414c30(DAT_004e240c);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x7c) != 0)) {
    ExceptionList = local_c;
    return 0;
  }
  uVar3 = FUN_00405a40(*(int *)(param_1 + 0x40));
  pvVar5 = (void *)CONCAT31(extraout_var,uVar3);
  if (pvVar5 == (void *)0x0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x1c) + 0x10))
              (*(int *)(param_1 + 0x40),0);
    puVar6 = operator_new(0x44);
    if (puVar6 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      local_c = pvVar5;
      piVar7 = FUN_0042fdb0(puVar6);
    }
    piVar7[1] = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
    piVar7[5] = *(int *)(param_1 + 0x14);
    piVar7[6] = 1;
    local_c = (void *)0xffffffff;
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0xb0) + 0x34) != *(int *)(param_1 + 0x14)) {
      piVar7[0xc] = *(int *)(param_1 + 0x30);
    }
    piVar7[2] = 5;
    FUN_00412e90(piVar7);
    ExceptionList = unaff_ESI;
    return 1;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x50) + 0x54) == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  this = operator_new(0xd8);
  local_4 = 1;
  if (this == (void *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00431b50(this,1);
  }
  local_4 = 0xffffffff;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0xb0) + 0x34) != *(int *)(param_1 + 0x14)) {
    piVar7[0xc] = *(int *)(param_1 + 0x30);
  }
  piVar7[1] = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
  iVar1 = *(int *)(iVar4 + 8);
  if (pvVar5 == (void *)0x1) {
    piVar7[8] = *(int *)(iVar4 + 0x10);
    iVar4 = *(int *)(param_1 + 0x3c);
    piVar7[0x30] = *(int *)(param_1 + 0x38);
    piVar7[0x31] = iVar4;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    piVar7[5] = *(int *)(*(int *)(param_1 + 0x40) + 4) * 2 - *(int *)(iVar4 + 4);
    piVar7[6] = iVar2 * 2 - iVar1;
  }
  FUN_00412e90(piVar7);
  ExceptionList = local_c;
  return 1;
}

