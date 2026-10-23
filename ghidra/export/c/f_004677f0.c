// FUNCTION: PORT1111 0x004677f0
// name: FUN_004677f0
// sig: undefined FUN_004677f0(undefined4 * param_1)


void __fastcall FUN_004677f0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b97e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c5e58;
  piVar1 = (int *)param_1[0xb];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0xb] = 0;
  local_4 = 0xffffffff;
  FUN_0046c8f0(param_1);
  ExceptionList = pvStack_c;
  return;
}

