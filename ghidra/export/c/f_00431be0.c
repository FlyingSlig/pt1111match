// FUNCTION: PORT1111 0x00431be0
// name: FUN_00431be0
// sig: undefined FUN_00431be0(undefined4 * param_1)


void __fastcall FUN_00431be0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7608;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bfb74;
  local_4 = 0;
  FUN_0045d860(param_1 + 0xd);
  local_4 = 0xffffffff;
  FUN_00411fd0(param_1);
  ExceptionList = pvStack_c;
  return;
}

