// FUNCTION: PORT1111 0x00469770
// name: FUN_00469770
// sig: undefined FUN_00469770(undefined4 * param_1)


void __fastcall FUN_00469770(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b99e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c5fac;
  local_4 = 0xe;
  FUN_00468f30((int)param_1);
  local_4._0_1_ = 0xd;
  FUN_00465e40(param_1 + 0x3b);
  local_4._0_1_ = 0xc;
  FUN_00488ad0(param_1 + 0x1e);
  local_4._0_1_ = 0xb;
  FUN_00465e40(param_1 + 0x1d);
  local_4._0_1_ = 10;
  FUN_00465e40(param_1 + 0x15);
  local_4._0_1_ = 9;
  FUN_00465e40(param_1 + 0x14);
  local_4._0_1_ = 8;
  FUN_00465e40(param_1 + 0x10);
  local_4._0_1_ = 7;
  FUN_00465e40(param_1 + 0xf);
  local_4._0_1_ = 6;
  FUN_00465e40(param_1 + 0xe);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00469290(param_1 + 0xb,&local_10,*(int **)param_1[0xc],(int *)param_1[0xc]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xc]);
}

