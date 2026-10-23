// FUNCTION: PORT1111 0x0042f870
// name: FUN_0042f870
// sig: undefined4 FUN_0042f870(int param_1)


undefined4 __fastcall FUN_0042f870(int param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b73cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00431b50(this,1);
  }
  piVar1[0xc] = *(int *)(param_1 + 0x30);
  piVar1[1] = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
  local_4 = 0xffffffff;
  iVar2 = FUN_00414c30(DAT_004e240c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) == 0)) {
    piVar1[8] = *(int *)(iVar2 + 0x10);
    iVar2 = *(int *)(param_1 + 0x3c);
    piVar1[0x30] = *(int *)(param_1 + 0x38);
    piVar1[0x31] = iVar2;
    FUN_00412e90(piVar1);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

