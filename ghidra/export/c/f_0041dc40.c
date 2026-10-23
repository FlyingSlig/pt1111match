// FUNCTION: PORT1111 0x0041dc40
// name: FUN_0041dc40
// sig: undefined FUN_0041dc40(int param_1)


void __fastcall FUN_0041dc40(int param_1)

{
  LPCSTR pCVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6a10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00466a40((void *)(param_1 + 4),"");
  FUN_00466a40((void *)(param_1 + 0x4c),"");
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0041dc00(param_1 + 0x50);
  FUN_0041dc00(param_1 + 0x5c);
  FUN_00403340(DAT_004e2b14,&local_14);
  local_4 = 0;
  thunk_FUN_00466040(&local_14,"data\\maps\\");
  thunk_FUN_00466040(&local_14,"snapshot_file");
  pCVar1 = (LPCSTR)FUN_00465e00(&local_14);
  DeleteFileA(pCVar1);
  puVar2 = FUN_00403340(DAT_004e2b14,&local_10);
  local_4._0_1_ = 1;
  FUN_00466a50(&local_14,puVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_10);
  thunk_FUN_00466040(&local_14,"data\\maps\\");
  thunk_FUN_00466040(&local_14,"snapshot_file2");
  pCVar1 = (LPCSTR)FUN_00465e00(&local_14);
  DeleteFileA(pCVar1);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  ExceptionList = local_c;
  return;
}

