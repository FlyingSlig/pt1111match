// FUNCTION: PORT1111 0x00417c30
// name: FUN_00417c30
// sig: undefined FUN_00417c30(undefined4 * param_1)


void __fastcall FUN_00417c30(undefined4 *param_1)

{
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6525;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bef74;
  local_4 = 5;
  FUN_00417b90((int)param_1);
  if (param_1[0x17] != 0) {
    timeKillEvent(param_1[0x17]);
  }
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(param_1 + 0x41,0x1c,10,FUN_00409650);
  local_4._0_1_ = 3;
  FUN_0045d860(param_1 + 0x1e);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00416b50(param_1 + 10,&uStack_10,*(int **)param_1[0xb],(int *)param_1[0xb]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xb]);
}

