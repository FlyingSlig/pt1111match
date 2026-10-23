// FUNCTION: PORT1111 0x00413870
// name: FUN_00413870
// sig: undefined FUN_00413870(undefined4 param_1, undefined4 param_2, undefined4 * param_3)


void FUN_00413870(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
  }
  return;
}

