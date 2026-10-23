// FUNCTION: PORT1111 0x00429c90
// name: FUN_00429c90
// sig: undefined4 FUN_00429c90(void * this, int * param_1, int param_2, int param_3)


undefined4 __thiscall FUN_00429c90(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar3 = (int *)FUN_00403d80(&local_10,*param_1,param_1[1]);
  local_18 = *piVar3;
  local_14 = piVar3[1];
  FUN_0042cfa0(*(void **)((int)this + 0x90),&local_18);
  iVar4 = FUN_0042d310(*(int *)((int)this + 0x90));
  iVar6 = *(int *)(*(int *)((int)this + 0x90) + 0x68);
  if (param_3 == 0) {
    local_10 = *param_1;
    local_c = param_1[1];
    local_8 = local_10;
    local_4 = local_c;
    if (-1 < iVar6) {
      do {
        piVar3 = (int *)FUN_0040a300(*(int *)(iVar4 + iVar6 * 4));
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          iVar7 = piVar3[2];
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            iVar5 = (**(code **)(**(int **)(iVar7 + iVar1 * 4) + 0x18))();
            if (((iVar5 != 0) &&
                (iVar5 = (**(code **)(**(int **)(iVar7 + iVar1 * 4) + 0xa4))(), iVar5 != 0)) &&
               (iVar5 = (**(code **)(**(int **)(iVar7 + iVar1 * 4) + 0xa8))(&local_10), iVar5 != 0))
            {
              return *(undefined4 *)(iVar7 + iVar1 * 4);
            }
          }
        }
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      piVar3 = (int *)FUN_0040a300(*(int *)(iVar4 + iVar6 * 4));
      if (piVar3 != (int *)0x0) {
        iVar1 = piVar3[2];
        iVar7 = *piVar3;
        if (param_2 == 0) {
          while (iVar7 = iVar7 + -1, -1 < iVar7) {
            iVar5 = (**(code **)(**(int **)(iVar1 + iVar7 * 4) + 0x18))();
            if (((iVar5 != 0) &&
                (iVar5 = (**(code **)(**(int **)(iVar1 + iVar7 * 4) + 0xa4))(), iVar5 != 0)) &&
               ((pvVar2 = *(void **)(iVar1 + iVar7 * 4), *(int *)((int)pvVar2 + 0x78) == 0 &&
                (iVar5 = FUN_00405db0(pvVar2,*param_1,param_1[1]), iVar5 != 0)))) goto LAB_00429dbb;
          }
        }
        else {
          while (iVar7 = iVar7 + -1, -1 < iVar7) {
            iVar5 = (**(code **)(**(int **)(iVar1 + iVar7 * 4) + 0x18))();
            if (((iVar5 != 0) &&
                (iVar5 = (**(code **)(**(int **)(iVar1 + iVar7 * 4) + 0xa4))(), iVar5 != 0)) &&
               ((pvVar2 = *(void **)(iVar1 + iVar7 * 4), *(int *)((int)pvVar2 + 0x78) == 0 &&
                ((*(int *)(*(int *)((int)pvVar2 + 0x50) + 0x48) == 4 &&
                 (iVar5 = FUN_00405db0(pvVar2,*param_1,param_1[1]), iVar5 != 0)))))) {
LAB_00429dbb:
              return *(undefined4 *)(iVar1 + iVar7 * 4);
            }
          }
        }
      }
    }
  }
  return 0;
}

