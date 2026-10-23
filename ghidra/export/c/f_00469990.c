// FUNCTION: PORT1111 0x00469990
// name: FUN_00469990
// sig: undefined4 * FUN_00469990(undefined4 * param_1)


undefined4 * __fastcall FUN_00469990(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;
  uchar *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c5fac;
  FUN_00465cf0(param_1 + 2);
  local_4 = 0;
  FUN_00465cf0(param_1 + 3);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 4);
  local_4._0_1_ = 2;
  FUN_00465cf0(param_1 + 5);
  local_4._0_1_ = 3;
  FUN_00465cf0(param_1 + 6);
  local_4._0_1_ = 4;
  FUN_00465cf0(param_1 + 9);
  local_4._0_1_ = 5;
  iVar1 = FUN_004748f0();
  param_1[0xc] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0xc] + 4) = param_1[0xc];
  *(undefined4 *)param_1[0xc] = param_1[0xc];
  *(undefined4 *)(param_1[0xc] + 8) = param_1[0xc];
  param_1[0xd] = 0;
  local_4._0_1_ = 6;
  FUN_00465cf0(param_1 + 0xe);
  local_4._0_1_ = 7;
  FUN_00465cf0(param_1 + 0xf);
  local_4._0_1_ = 8;
  FUN_00465cf0(param_1 + 0x10);
  local_4._0_1_ = 9;
  FUN_00465cf0(param_1 + 0x14);
  local_4._0_1_ = 10;
  FUN_00465cf0(param_1 + 0x15);
  local_4._0_1_ = 0xb;
  FUN_00465cf0(param_1 + 0x1d);
  local_4._0_1_ = 0xc;
  FUN_004889d0(param_1 + 0x1e);
  this = param_1 + 0x3b;
  local_4._0_1_ = 0xd;
  FUN_00465cf0(this);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  puVar2 = (uchar *)FUN_00465e00(this);
  FUN_00466a40(this,puVar2);
  FUN_00467dc0((int)param_1);
  param_1[0x3d] = 1;
  ExceptionList = local_c;
  return param_1;
}

