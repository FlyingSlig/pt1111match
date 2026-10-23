// FUNCTION: PORT1111 0x00442660
// name: FUN_00442660
// sig: undefined FUN_00442660(int param_1, int * param_2)


void FUN_00442660(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_2;
  iVar3 = FUN_00441a80(param_1,param_2);
  param_2 = (int *)**(int **)(DAT_004e240c + 8);
  if (param_2 != *(int **)(DAT_004e240c + 8)) {
    do {
      piVar2 = param_2;
      iVar4 = (**(code **)(*(int *)param_2[4] + 0x88))();
      if (*(int *)(iVar4 + 0x34) == param_1) {
        FUN_004453d0(*(void **)(piVar2[4] + 0xb0),(int)piVar1,iVar3);
      }
      FUN_00413730((int *)&param_2);
    } while (param_2 != *(int **)(DAT_004e240c + 8));
  }
  return;
}

