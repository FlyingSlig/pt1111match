// FUNCTION: PORT1111 0x00453380
// name: FUN_00453380
// sig: undefined FUN_00453380(int param_1)


void __fastcall FUN_00453380(int param_1)

{
  uchar *puVar1;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00465cf0(&local_10);
  local_4 = 0;
  FUN_00466970(&local_10,(byte *)"%d/%d");
  puVar1 = (uchar *)FUN_00465e00(&local_10);
  FUN_004737d0(*(void **)(param_1 + 8),puVar1);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return;
}

