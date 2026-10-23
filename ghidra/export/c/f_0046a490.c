// FUNCTION: PORT1111 0x0046a490
// name: FUN_0046a490
// sig: undefined4 * FUN_0046a490(undefined4 * param_1)


undefined4 * __fastcall FUN_0046a490(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9b9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c5fd4;
  FUN_00451970(param_1 + 0x21);
  local_4 = 0;
  FUN_004889d0(param_1 + 0x22);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 0x3e);
  local_4 = CONCAT31(local_4._1_3_,2);
  CoInitialize((LPVOID)0x0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar3 = param_1 + 2;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  DVar1 = GetCurrentThreadId();
  param_1[0x1d] = DVar1;
  DAT_004dd968 = 1;
  FUN_00488c20();
  ExceptionList = local_c;
  return param_1;
}

