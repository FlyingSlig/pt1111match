// FUNCTION: PORT1111 0x0046f830
// name: FUN_0046f830
// sig: undefined FUN_0046f830(int param_1)


void __fastcall FUN_0046f830(int param_1)

{
  undefined4 *puVar1;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x28) = 3;
  local_10 = param_1;
  FUN_00465e40((undefined4 *)(param_1 + 0xa4));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_00465e40((undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((int)DAT_004e2b14 + 0x60);
  puVar1 = FUN_00467da0(DAT_004e2b14,&local_10);
  local_4 = 0;
  FUN_00466a50((void *)(param_1 + 0x94),puVar1);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  ExceptionList = local_c;
  return;
}

