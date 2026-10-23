// FUNCTION: PORT1111 0x00439140
// name: FUN_00439140
// sig: uint FUN_00439140(int param_1, int param_2, int param_3, int * param_4)


uint FUN_00439140(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint in_EAX;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = param_4;
  if ((param_2 < 2) && (param_3 < 2)) {
    return in_EAX & 0xffffff00;
  }
  if ((*(int *)(param_1 + 8) == 3) &&
     (in_EAX = *(uint *)(param_1 + 0xc), *(int *)(in_EAX + 8) == param_2)) {
    if ((void *)*param_4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_4);
    }
    pvVar2 = operator_new(param_2 * param_3 * 4);
    *param_4 = (int)pvVar2;
    param_4 = *(int **)(*(int *)(param_1 + 0xc) + 4);
    piVar5 = (int *)*param_4;
    if (piVar5 != param_4) {
      param_4 = (int *)0x0;
      do {
        uVar4 = piVar5[2];
        piVar5 = (int *)*piVar5;
        piVar3 = param_4;
        iVar6 = param_3;
        if (0 < param_3) {
          do {
            if ((uVar4 & 1) == 0) {
              *(undefined4 *)((int)piVar3 + *piVar1) = 0;
            }
            else {
              *(undefined4 *)((int)piVar3 + *piVar1) = 1;
            }
            uVar4 = (int)uVar4 >> 1;
            iVar6 = iVar6 + -1;
            piVar3 = piVar3 + param_2;
          } while (iVar6 != 0);
        }
        param_4 = param_4 + 1;
      } while (piVar5 != (int *)*(int *)(*(int *)(param_1 + 0xc) + 4));
    }
    return CONCAT31((int3)((uint)param_4 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

