// FUNCTION: PORT1111 0x00439390
// name: FUN_00439390
// sig: undefined4 FUN_00439390(int param_1, void * param_2)


undefined4 FUN_00439390(int param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_00466a50(param_2,*(undefined4 **)(param_1 + 0xc));
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  if ((*(int *)(param_1 + 8) == 6) &&
     (param_1 = *(uint *)(param_1 + 0xc), *(int *)(param_1 + 8) == 1)) {
    uVar1 = FUN_00466a50(param_2,*(undefined4 **)(**(int **)(param_1 + 4) + 8));
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

