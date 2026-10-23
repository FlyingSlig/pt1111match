// FUNCTION: PORT1111 0x0041ddb0
// name: FUN_0041ddb0
// sig: undefined4 * FUN_0041ddb0(undefined4 * param_1)


undefined4 * __fastcall FUN_0041ddb0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6a54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041c440(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_004bf6b4;
  FUN_00465cf0(param_1 + 0x13);
  local_4._0_1_ = 1;
  uVar1 = FUN_0041d300();
  param_1[0x15] = uVar1;
  param_1[0x16] = 0;
  local_4._0_1_ = 2;
  uVar1 = FUN_0043d220();
  param_1[0x18] = uVar1;
  param_1[0x19] = 0;
  local_4._0_1_ = 3;
  FUN_0047bfa0(param_1 + 0x1b,0x400);
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x1e] = 0;
  FUN_00466a40(param_1 + 0x13,"");
  FUN_0041dc00((int)(param_1 + 0x14));
  FUN_0041dc00((int)(param_1 + 0x17));
  puVar3 = param_1 + 0x25;
  for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

