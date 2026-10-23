// FUNCTION: PORT1111 0x00439360
// name: FUN_00439360
// sig: undefined4 FUN_00439360(int param_1, undefined4 * param_2)


undefined4 FUN_00439360(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 8) == 3) &&
     (param_1 = *(uint *)(param_1 + 0xc), *(int *)(param_1 + 8) == 1)) {
    *param_2 = *(undefined4 *)(**(int **)(param_1 + 4) + 8);
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

