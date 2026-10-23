// FUNCTION: PORT1111 0x00438d20
// name: FUN_00438d20
// sig: undefined FUN_00438d20(undefined4 * param_1)


void __fastcall FUN_00438d20(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7c7c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c0134;
  local_4 = 3;
  FUN_00436db0((int)param_1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004389c0(param_1 + 0xc,&local_10,*(int **)param_1[0xd],(int *)param_1[0xd]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd]);
}

