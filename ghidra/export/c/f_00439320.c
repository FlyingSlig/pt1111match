// FUNCTION: PORT1111 0x00439320
// name: FUN_00439320
// sig: uint FUN_00439320(uint param_1, float * param_2)


uint FUN_00439320(uint param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 2) {
    fVar1 = *(float *)(param_1 + 0xc);
    *param_2 = fVar1;
    return CONCAT31((int3)((uint)fVar1 >> 8),1);
  }
  if ((*(int *)(param_1 + 8) == 3) &&
     (param_1 = *(uint *)(param_1 + 0xc), *(int *)(param_1 + 8) == 1)) {
    iVar2 = **(int **)(param_1 + 4);
    *param_2 = (float)*(int *)(iVar2 + 8);
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

