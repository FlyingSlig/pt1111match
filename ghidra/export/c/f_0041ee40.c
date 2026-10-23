// FUNCTION: PORT1111 0x0041ee40
// name: FUN_0041ee40
// sig: undefined FUN_0041ee40(void)


void FUN_0041ee40(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6b68;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_004016b0(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_004017e0(local_34,local_50);
  local_34[0] = &PTR_FUN_004c6e20;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_004cc884);
}

