// FUNCTION: PORT1111 0x0042a600
// name: FUN_0042a600
// sig: undefined4 * FUN_0042a600(undefined4 * param_1, int param_2, undefined4 * param_3)


undefined4 * FUN_0042a600(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1 + param_2;
}

