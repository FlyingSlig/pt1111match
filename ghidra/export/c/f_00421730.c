// FUNCTION: PORT1111 0x00421730
// name: FUN_00421730
// sig: undefined4 * FUN_00421730(undefined4 * param_1)


undefined4 * __fastcall FUN_00421730(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6c8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bf738;
  uVar1 = FUN_004216b0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = 0;
  param_1[0x12] = 5;
  param_1[0x18] = 1;
  param_1[0x19] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar2 = FUN_0046c8b0(0x1e,0x1e,0x1e);
  DAT_004e0b18 = (short)uVar2;
  ExceptionList = local_c;
  return param_1;
}

