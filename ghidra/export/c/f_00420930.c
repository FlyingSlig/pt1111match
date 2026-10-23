// FUNCTION: PORT1111 0x00420930
// name: FUN_00420930
// sig: undefined FUN_00420930(undefined4 * param_1)


void __fastcall FUN_00420930(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6c1f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004bf6fc;
  local_4 = 5;
  FUN_0041f500((int)param_1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004206c0(param_1 + 0x1f,&local_10,*(int **)param_1[0x20],(int *)param_1[0x20]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x20]);
}

