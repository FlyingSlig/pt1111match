// FUNCTION: PORT1111 0x0042d4f0
// name: FUN_0042d4f0
// sig: undefined FUN_0042d4f0(undefined4 * param_1)


void __fastcall FUN_0042d4f0(undefined4 *param_1)

{
  int iVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bf9a8;
  local_4 = 0;
  iVar1 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  if (param_1[2] != 0) {
    FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
    iVar1 = (int)*(short *)(param_1[2] + 0x34);
    this = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    FUN_00477b30(this,iVar1);
  }
  param_1[2] = 0;
  FUN_0042d420((int)param_1);
  local_4 = 0xffffffff;
  FUN_0042d390(param_1);
  ExceptionList = local_c;
  return;
}

