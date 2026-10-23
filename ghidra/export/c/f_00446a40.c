// FUNCTION: PORT1111 0x00446a40
// name: FUN_00446a40
// sig: undefined4 * FUN_00446a40(undefined4 * param_1)


undefined4 * __fastcall FUN_00446a40(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b844e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480220(param_1,0,0,6,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_004c3be0;
  FUN_00480e60(param_1 + 0x10);
  local_4._0_1_ = 1;
  param_1[0xe] = 0;
  this = operator_new(0x14);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this != (void *)0x0) {
    puVar1 = FUN_00446970(this,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      param_1[0xf] = puVar1 + 3;
      ExceptionList = local_c;
      return param_1;
    }
  }
  param_1[0xf] = 0;
  ExceptionList = local_c;
  return param_1;
}

