// FUNCTION: PORT1111 0x0043f590
// name: FUN_0043f590
// sig: int * FUN_0043f590(void * this, int * param_1, int param_2, int param_3)


int * __thiscall FUN_0043f590(void *this,int *param_1,int param_2,int param_3)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  ulonglong uVar6;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  int local_4;
  
  piVar3 = param_1;
  sVar1 = *(short *)(param_1[0x10] + 0x4c);
  local_14 = **(int **)(DAT_004e240c + 8);
  local_18 = 0x7fffffff;
  local_10 = -1;
  param_1 = (int *)0x0;
  local_c = this;
  if ((int *)local_14 != *(int **)(DAT_004e240c + 8)) {
    do {
      iVar5 = local_14;
      bVar4 = FUN_0043ea70(local_c,*(int **)(local_14 + 0x10),piVar3,param_2,param_3,&local_4);
      if ((CONCAT31(extraout_var,bVar4) != 0) &&
         (piVar2 = *(int **)(iVar5 + 0x10), piVar2 != piVar3)) {
        local_8 = (int)sVar1 - (int)*(short *)(piVar2[0x10] + 0x4c);
        local_8 = local_8 * local_8;
        uVar6 = FUN_00497d88();
        iVar5 = (int)uVar6;
        if (local_4 != 0) {
          iVar5 = iVar5 - local_4;
        }
        if (iVar5 < local_18) {
          local_10 = piVar2[4];
          param_1 = piVar2;
          local_18 = iVar5;
        }
      }
      FUN_00413730(&local_14);
    } while (local_14 != *(int *)(DAT_004e240c + 8));
    if (local_10 != -1) {
      return param_1;
    }
  }
  if ((param_2 != 0) && (param_2 != 2)) {
    FUN_004137d0((int)piVar3);
    return param_1;
  }
  FUN_00445030((void *)piVar3[0x2c],0x3f9);
  return param_1;
}

