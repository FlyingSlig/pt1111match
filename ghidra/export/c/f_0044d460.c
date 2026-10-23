// FUNCTION: PORT1111 0x0044d460
// name: FUN_0044d460
// sig: undefined4 FUN_0044d460(void * this, char * param_1)


undefined4 __thiscall FUN_0044d460(void *this,char *param_1)

{
  uchar *puVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00403340(DAT_004e2b14,&local_10);
  local_4 = 0;
  thunk_FUN_00466040(&local_10,"data\\som\\");
  thunk_FUN_00466040(&local_10,param_1);
  puVar1 = (uchar *)FUN_00465e00(&local_10);
  iVar2 = FUN_004861c0((void *)((int)this + 0x1c),puVar1);
  local_4 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_00465e40(&local_10);
    ExceptionList = local_c;
    return 0;
  }
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return 1;
}

