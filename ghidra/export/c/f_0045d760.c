// FUNCTION: PORT1111 0x0045d760
// name: FUN_0045d760
// sig: undefined FUN_0045d760(undefined4 * param_1, int param_2)


void __cdecl FUN_0045d760(undefined4 *param_1,int param_2)

{
  undefined **local_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b96f8;
  local_c = ExceptionList;
  uStack_14 = 0;
  local_10 = (undefined1 *)&local_18;
  local_18 = &PTR_LAB_004c4b20;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045d640(param_1,param_2 + -4,(undefined4 *)(param_2 + -4),*(int *)(param_2 + -4));
  local_4 = 0xffffffff;
  uStack_14 = 0x45d7b8;
  FUN_0045cdf0((undefined4 *)&stack0x0000000c);
  ExceptionList = local_c;
  return;
}

