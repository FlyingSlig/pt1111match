// FUNCTION: PORT1111 0x004390a0
// name: FUN_004390a0
// sig: uint FUN_004390a0(uint param_1, int * param_2, int * param_3, undefined4 * param_4)


uint FUN_004390a0(uint param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 8) == 3) &&
     (param_1 = *(uint *)(param_1 + 0xc), *(int *)(param_1 + 8) == 3)) {
    piVar1 = (int *)**(int **)(param_1 + 4);
    *param_2 = piVar1[2];
    piVar1 = (int *)*piVar1;
    *param_3 = piVar1[2];
    iVar2 = *piVar1;
    *param_4 = *(undefined4 *)(iVar2 + 8);
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

