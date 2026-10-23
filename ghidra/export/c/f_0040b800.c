// FUNCTION: PORT1111 0x0040b800
// name: FUN_0040b800
// sig: undefined FUN_0040b800(undefined4 * param_1)


void __fastcall FUN_0040b800(undefined4 *param_1)

{
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5cab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bd570;
  local_4 = 0;
  local_10 = param_1;
  FUN_0040ae80((int)param_1);
  local_4 = 0xffffffff;
  FUN_0040b2c0(param_1 + 1,&local_10,*(int **)param_1[2],(int *)param_1[2]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[2]);
}

