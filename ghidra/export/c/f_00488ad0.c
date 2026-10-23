// FUNCTION: PORT1111 0x00488ad0
// name: FUN_00488ad0
// sig: undefined FUN_00488ad0(undefined4 * param_1)


void __fastcall FUN_00488ad0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004ba9d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6bf8;
  local_4 = 1;
  FUN_004963d0((int)(param_1 + 2));
  local_4 = local_4 & 0xffffff00;
  FUN_00465e40(param_1 + 0x1a);
  local_4 = 0xffffffff;
  FUN_004966e0(param_1 + 2);
  ExceptionList = local_c;
  return;
}

