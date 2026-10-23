// FUNCTION: PORT1111 0x00412ec0
// name: FUN_00412ec0
// sig: undefined FUN_00412ec0(undefined4 * param_1, undefined4 param_2)


void FUN_00412ec0(undefined4 *param_1,undefined4 param_2)

{
  if (DAT_004e2424 != (void *)0x0) {
    FUN_00434500(DAT_004e2424,param_1,param_2);
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

