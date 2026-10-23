// FUNCTION: PORT1111 0x00444020
// name: FUN_00444020
// sig: undefined FUN_00444020(void * this, int param_1, int param_2, int param_3, int param_4)


void __thiscall FUN_00444020(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_3 != 0) {
    iVar2 = -1;
    *(undefined4 *)((int)this + 0xc) = 1;
    if (param_3 < 0) {
      iVar2 = 1;
    }
    iVar2 = iVar2 * param_4;
    if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < *(int *)((int)this + 0x10))) &&
       (param_2 < *(int *)((int)this + 0x14))) {
      piVar1 = (int *)(*(int *)((int)this + 4) +
                      (*(int *)((int)this + 0x14) * param_2 + param_1) * 4);
      *piVar1 = *piVar1 + param_3;
    }
    iVar6 = param_3 + iVar2;
    param_3 = param_1 + -1;
    param_4 = 3;
    if (0 < iVar6) {
      iVar5 = (param_3 - param_1) + param_2;
      iVar7 = param_2 - param_1;
      param_2 = param_1;
      do {
        iVar8 = param_3 + param_4;
        for (iVar3 = param_2; iVar3 < iVar8; iVar3 = iVar3 + 1) {
          if (((-1 < iVar3) && (-1 < iVar5)) &&
             ((iVar3 < *(int *)((int)this + 0x10) && (iVar5 < *(int *)((int)this + 0x14))))) {
            piVar1 = (int *)(*(int *)((int)this + 4) +
                            (iVar5 * *(int *)((int)this + 0x14) + iVar3) * 4);
            *piVar1 = *piVar1 + iVar6;
          }
        }
        iVar3 = param_4 + iVar5;
        iVar4 = iVar7 + param_2;
        if (iVar4 < iVar3) {
          iVar9 = iVar8 + -1;
          do {
            if (((-1 < iVar9) && (-1 < iVar4)) &&
               ((iVar9 < *(int *)((int)this + 0x10) && (iVar4 < *(int *)((int)this + 0x14))))) {
              piVar1 = (int *)(*(int *)((int)this + 4) +
                              (*(int *)((int)this + 0x14) * iVar4 + iVar9) * 4);
              *piVar1 = *piVar1 + iVar6;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
        if (param_3 < iVar8 + -1) {
          iVar4 = iVar3 + -1;
          iVar9 = param_3;
          do {
            if ((((-1 < iVar9) && (-1 < iVar4)) && (iVar9 < *(int *)((int)this + 0x10))) &&
               (iVar4 < *(int *)((int)this + 0x14))) {
              piVar1 = (int *)(*(int *)((int)this + 4) +
                              (*(int *)((int)this + 0x14) * iVar4 + iVar9) * 4);
              *piVar1 = *piVar1 + iVar6;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8 + -1);
        }
        for (iVar8 = iVar5; iVar8 < iVar3 + -1; iVar8 = iVar8 + 1) {
          if (((-1 < param_3) && (-1 < iVar8)) &&
             ((param_3 < *(int *)((int)this + 0x10) && (iVar8 < *(int *)((int)this + 0x14))))) {
            piVar1 = (int *)(*(int *)((int)this + 4) +
                            (*(int *)((int)this + 0x14) * iVar8 + param_3) * 4);
            *piVar1 = *piVar1 + iVar6;
          }
        }
        param_4 = param_4 + 2;
        iVar6 = iVar6 + iVar2;
        param_3 = param_3 + -1;
        param_2 = param_2 + -1;
        iVar5 = iVar5 + -1;
      } while (0 < iVar6);
      return;
    }
    if (iVar6 < 0) {
      iVar5 = (param_3 - param_1) + param_2;
      iVar7 = param_2 - param_1;
      param_2 = param_1;
      do {
        iVar8 = param_3 + param_4;
        for (iVar3 = param_2; iVar3 < iVar8; iVar3 = iVar3 + 1) {
          if (((-1 < iVar3) && (-1 < iVar5)) &&
             ((iVar3 < *(int *)((int)this + 0x10) && (iVar5 < *(int *)((int)this + 0x14))))) {
            piVar1 = (int *)(*(int *)((int)this + 4) +
                            (iVar5 * *(int *)((int)this + 0x14) + iVar3) * 4);
            *piVar1 = *piVar1 + iVar6;
          }
        }
        iVar3 = param_4 + iVar5;
        iVar4 = iVar7 + param_2;
        if (iVar4 < iVar3) {
          iVar9 = iVar8 + -1;
          do {
            if ((((-1 < iVar9) && (-1 < iVar4)) && (iVar9 < *(int *)((int)this + 0x10))) &&
               (iVar4 < *(int *)((int)this + 0x14))) {
              piVar1 = (int *)(*(int *)((int)this + 4) +
                              (*(int *)((int)this + 0x14) * iVar4 + iVar9) * 4);
              *piVar1 = *piVar1 + iVar6;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
        if (param_3 < iVar8 + -1) {
          iVar4 = iVar3 + -1;
          iVar9 = param_3;
          do {
            if (((-1 < iVar9) && (-1 < iVar4)) &&
               ((iVar9 < *(int *)((int)this + 0x10) && (iVar4 < *(int *)((int)this + 0x14))))) {
              piVar1 = (int *)(*(int *)((int)this + 4) +
                              (*(int *)((int)this + 0x14) * iVar4 + iVar9) * 4);
              *piVar1 = *piVar1 + iVar6;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8 + -1);
        }
        for (iVar8 = iVar5; iVar8 < iVar3 + -1; iVar8 = iVar8 + 1) {
          if (((-1 < param_3) && (-1 < iVar8)) &&
             ((param_3 < *(int *)((int)this + 0x10) && (iVar8 < *(int *)((int)this + 0x14))))) {
            piVar1 = (int *)(*(int *)((int)this + 4) +
                            (*(int *)((int)this + 0x14) * iVar8 + param_3) * 4);
            *piVar1 = *piVar1 + iVar6;
          }
        }
        param_4 = param_4 + 2;
        iVar6 = iVar6 + iVar2;
        param_3 = param_3 + -1;
        param_2 = param_2 + -1;
        iVar5 = iVar5 + -1;
      } while (iVar6 < 0);
    }
  }
  return;
}

