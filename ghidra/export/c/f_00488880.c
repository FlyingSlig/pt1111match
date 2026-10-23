// FUNCTION: PORT1111 0x00488880
// name: FUN_00488880
// sig: undefined FUN_00488880(undefined4 * param_1)


void __fastcall FUN_00488880(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba96b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6bcc;
  local_4 = 0;
  if (param_1[1] != 0) {
    (*(code *)PTR_FUN_004c6be4)();
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 2);
  ExceptionList = local_c;
  return;
}

