// FUNCTION: PORT1111 0x00452480
// name: FUN_00452480
// sig: undefined4 * FUN_00452480(undefined4 * param_1)


undefined4 * __fastcall FUN_00452480(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8c54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c4650;
  FUN_00487dc0(param_1 + 2);
  local_4 = 0;
  FUN_004535d0(param_1 + 0x12);
  puVar2 = param_1 + 0x20;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x94,0x30,0x1a,FUN_004535d0,FUN_004534e0);
  param_1[0x1e6] = 0;
  puVar2 = param_1 + 0x1cc;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004522e0(param_1 + 0x1e7);
  param_1[1] = 0;
  param_1[0x215] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  ExceptionList = local_c;
  return param_1;
}

