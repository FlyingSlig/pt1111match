// FUNCTION: PORT1111 0x004266a0
// name: FUN_004266a0
// sig: undefined4 * FUN_004266a0(undefined4 * param_1)


undefined4 * __fastcall FUN_004266a0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004249a0(param_1);
  param_1[9] = 0;
  *param_1 = &PTR_LAB_004bf8b0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[4] = 0;
  local_4 = 0;
  uVar1 = FUN_0042a3a0(0);
  param_1[3] = uVar1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0xee;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  ExceptionList = local_c;
  return param_1;
}

