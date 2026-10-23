// FUNCTION: PORT1111 0x00432280
// name: FUN_00432280
// sig: undefined4 FUN_00432280(int param_1)


undefined4 __fastcall FUN_00432280(int param_1)

{
  undefined4 uVar1;
  void *this;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b762b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x14) != -1) {
    ExceptionList = &local_c;
    uVar1 = FUN_0042f870(param_1);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00431b50(this,1);
  }
  piVar2[0xc] = *(int *)(param_1 + 0x30);
  piVar2[1] = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
  piVar2[5] = *(int *)(param_1 + 0x1c);
  piVar2[6] = *(int *)(param_1 + 0x20);
  local_4 = 0xffffffff;
  FUN_00412e90(piVar2);
  ExceptionList = local_c;
  return 1;
}

