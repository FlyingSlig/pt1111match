// FUNCTION: PORT1111 0x00421560
// name: FUN_00421560
// sig: undefined FUN_00421560(undefined4 param_1, undefined4 param_2, undefined4 * param_3)


void FUN_00421560(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
    puVar1[6] = param_3[4];
  }
  return;
}

