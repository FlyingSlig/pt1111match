// FUNCTION: PORT1111 0x0041cc10
// name: FUN_0041cc10
// sig: undefined4 FUN_0041cc10(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_0041cc10(void *this,undefined4 *param_1)

{
  LPCSTR lpNewFileName;
  LPCSTR lpExistingFileName;
  BOOL bFailIfExists;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b68a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047c110((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x78) = 0;
  FUN_00403340(DAT_004e2b14,&local_10);
  local_4 = 0;
  thunk_FUN_00466040(&local_10,"data\\maps\\");
  FUN_00466b20(&local_14,&local_10);
  local_4._0_1_ = 1;
  thunk_FUN_00466040(&local_14,"current.acp");
  bFailIfExists = 0;
  lpNewFileName = (LPCSTR)FUN_00465e00(&local_14);
  lpExistingFileName = (LPCSTR)FUN_00465e00(param_1);
  CopyFileA(lpExistingFileName,lpNewFileName,bFailIfExists);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_14);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return 1;
}

