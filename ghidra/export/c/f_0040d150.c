// FUNCTION: PORT1111 0x0040d150
// name: FUN_0040d150
// sig: undefined4 * FUN_0040d150(undefined4 * param_1)


undefined4 * __fastcall FUN_0040d150(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5e33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047a370(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bd60c;
  iVar1 = FUN_00482680();
  param_1[0xf] = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(undefined4 *)(param_1[0xf] + 4) = param_1[0xf];
  *(undefined4 *)param_1[0xf] = param_1[0xf];
  *(undefined4 *)(param_1[0xf] + 8) = param_1[0xf];
  param_1[0x10] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00478030((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

