// FUNCTION: PORT1111 0x00439060
// name: FUN_00439060
// sig: uint FUN_00439060(uint param_1, int * param_2, undefined4 * param_3)


uint FUN_00439060(uint param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 8) == 3) &&
     (param_1 = *(uint *)(param_1 + 0xc), *(int *)(param_1 + 8) == 2)) {
    piVar1 = (int *)**(int **)(param_1 + 4);
    *param_2 = piVar1[2];
    iVar2 = *piVar1;
    *param_3 = *(undefined4 *)(iVar2 + 8);
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

