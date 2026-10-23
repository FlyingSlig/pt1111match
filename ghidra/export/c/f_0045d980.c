// FUNCTION: PORT1111 0x0045d980
// name: FUN_0045d980
// sig: undefined FUN_0045d980(undefined4 * param_1, int param_2)


void __cdecl FUN_0045d980(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b96f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (4 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    ExceptionList = &local_c;
    FUN_0045d760(param_1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_0045cdf0((undefined4 *)&stack0x0000000c);
  ExceptionList = local_c;
  return;
}

