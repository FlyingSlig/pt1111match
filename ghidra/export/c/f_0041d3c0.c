// FUNCTION: PORT1111 0x0041d3c0
// name: FUN_0041d3c0
// sig: undefined4 * FUN_0041d3c0(undefined4 param_1, undefined4 param_2, undefined4 * param_3)


undefined4 * FUN_0041d3c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b6961;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0xc);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    FUN_00466b20(puVar1 + 2,param_3);
  }
  ExceptionList = local_10;
  return puVar1;
}

