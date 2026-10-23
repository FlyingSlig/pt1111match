// FUNCTION: PORT1111 0x0045d640
// name: FUN_0045d640
// sig: undefined FUN_0045d640(undefined4 * param_1, int param_2, undefined4 * param_3, int param_4)


void __cdecl FUN_0045d640(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b96b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_3 = *param_1;
  local_4 = 0;
  FUN_0045d0a0((int)param_1,0,param_2 - (int)param_1 >> 2,param_4);
  local_4 = 0xffffffff;
  FUN_0045cdf0((undefined4 *)&stack0x00000014);
  ExceptionList = local_c;
  return;
}

