// FUNCTION: PORT1111 0x0043b400
// name: FUN_0043b400
// sig: undefined FUN_0043b400(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)


void __thiscall FUN_0043b400(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_10;
  int local_8;
  
  if ((param_2 != -1) && (param_3 != -1)) {
    local_8 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    local_10 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
    if ((local_8 < 0) ||
       (((local_10 < 0 || (*(int *)((int)this + 0x10) <= local_8)) ||
        (*(int *)((int)this + 0x14) <= local_10)))) {
      FUN_0042aaf0(0);
    }
    else {
      FUN_0042aaf0((*(int *)((int)this + 0x10) * local_10 + local_8) * 0x30 +
                   *(int *)((int)this + 4));
    }
  }
  if (param_4 == -1) {
    if (param_2 != -1) {
      return;
    }
  }
  else {
    iVar4 = param_1;
    iVar8 = param_1;
    if (param_5 != -1) {
      iVar4 = (int)(param_4 + (param_4 >> 0x1f & 7U)) >> 3;
      iVar8 = (int)(param_5 + (param_5 >> 0x1f & 7U)) >> 3;
      if (((iVar4 < 0) || (iVar8 < 0)) ||
         ((*(int *)((int)this + 0x10) <= iVar4 || (*(int *)((int)this + 0x14) <= iVar8)))) {
        FUN_0043cd90(0);
      }
      else {
        FUN_0043cd90((*(int *)((int)this + 0x10) * iVar8 + iVar4) * 0x30 + *(int *)((int)this + 4));
      }
    }
    if (param_2 == -1) {
      iVar6 = iVar8 + -2;
      if (iVar6 <= iVar8 + 2) {
        iVar9 = iVar4 + -2;
        do {
          for (; iVar9 <= iVar4 + 2; iVar9 = iVar9 + 1) {
            if ((((-1 < iVar9) && (-1 < iVar6)) && (iVar9 < *(int *)((int)this + 0x10))) &&
               ((iVar6 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar9) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          iVar6 = iVar6 + 1;
          iVar9 = iVar4 + -2;
        } while (iVar6 <= iVar8 + 2);
      }
    }
    else {
      if (iVar4 == local_8) {
        if (local_10 < iVar8) {
          iVar8 = local_8 + 2;
          iVar6 = local_10 + -2;
          iVar4 = local_8 + -2;
          for (iVar9 = iVar4; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
            if (((-1 < iVar9) && (-1 < iVar6)) &&
               ((iVar9 < *(int *)((int)this + 0x10) &&
                ((iVar6 < *(int *)((int)this + 0x14) &&
                 (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar9) * 0x30 +
                                   *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar6 = local_10 + 3;
          for (iVar9 = iVar4; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
            if ((((-1 < iVar9) && (-1 < iVar6)) && (iVar9 < *(int *)((int)this + 0x10))) &&
               ((iVar6 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar9) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          for (iVar6 = local_10 + -1; iVar9 = iVar4, iVar6 <= local_10 + 2; iVar6 = iVar6 + 1) {
            for (; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
              if (((-1 < iVar9) && (-1 < iVar6)) &&
                 ((iVar9 < *(int *)((int)this + 0x10) &&
                  ((iVar6 < *(int *)((int)this + 0x14) &&
                   (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar9) * 0x30 +
                                     *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
              }
            }
          }
          goto LAB_0043c10e;
        }
        if (iVar8 < local_10) {
          iVar6 = local_8 + 2;
          iVar4 = local_8 + -2;
          for (iVar8 = iVar4; iVar8 <= iVar6; iVar8 = iVar8 + 1) {
            pvVar3 = (void *)FUN_0043abf0(this,iVar8,local_10 + 2);
            if (pvVar3 != (void *)0x0) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar8 = local_10 + -3;
          for (iVar9 = iVar4; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
            if ((((-1 < iVar9) && (-1 < iVar8)) && (iVar9 < *(int *)((int)this + 0x10))) &&
               ((iVar8 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar8 + iVar9) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          for (iVar8 = local_10 + -2; iVar9 = iVar4, iVar8 <= local_10 + 1; iVar8 = iVar8 + 1) {
            for (; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
              if (((-1 < iVar9) && (-1 < iVar8)) &&
                 ((iVar9 < *(int *)((int)this + 0x10) &&
                  ((iVar8 < *(int *)((int)this + 0x14) &&
                   (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar8 + iVar9) * 0x30 +
                                     *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
              }
            }
          }
          goto LAB_0043c10e;
        }
      }
      if ((local_8 < iVar4) && (iVar8 == local_10)) {
        iVar8 = local_10 + 2;
        iVar4 = local_10 + -2;
        for (iVar6 = iVar4; iVar6 <= iVar8; iVar6 = iVar6 + 1) {
          pvVar3 = (void *)FUN_0043abf0(this,local_8 + -2,iVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
          }
        }
        iVar6 = local_8 + 3;
        for (iVar9 = iVar4; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
          if ((((-1 < iVar6) && (-1 < iVar9)) && (iVar6 < *(int *)((int)this + 0x10))) &&
             ((iVar9 < *(int *)((int)this + 0x14) &&
              (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar9 + iVar6) * 0x30 +
                                *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
            FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
          }
        }
        if (iVar4 <= iVar8) {
          iVar6 = local_8 + -1;
          do {
            for (; iVar6 <= local_8 + 2; iVar6 = iVar6 + 1) {
              if (((-1 < iVar6) && (-1 < iVar4)) &&
                 ((iVar6 < *(int *)((int)this + 0x10) &&
                  ((iVar4 < *(int *)((int)this + 0x14) &&
                   (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar6) * 0x30 +
                                     *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
              }
            }
            iVar4 = iVar4 + 1;
            iVar6 = local_8 + -1;
          } while (iVar4 <= iVar8);
        }
      }
      else {
        if (iVar4 < local_8) {
          if (iVar8 == local_10) {
            iVar8 = local_10 + 2;
            iVar4 = local_10 + -2;
            for (iVar6 = iVar4; iVar6 <= iVar8; iVar6 = iVar6 + 1) {
              pvVar3 = (void *)FUN_0043abf0(this,local_8 + 2,iVar6);
              if (pvVar3 != (void *)0x0) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
              }
            }
            iVar6 = local_8 + -3;
            for (iVar9 = iVar4; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
              if ((((-1 < iVar6) && (-1 < iVar9)) && (iVar6 < *(int *)((int)this + 0x10))) &&
                 ((iVar9 < *(int *)((int)this + 0x14) &&
                  (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar9 + iVar6) * 0x30 +
                                    *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
              }
            }
            if (iVar4 <= iVar8) {
              iVar6 = local_8 + -2;
              do {
                for (; iVar6 <= local_8 + 1; iVar6 = iVar6 + 1) {
                  if (((-1 < iVar6) && (-1 < iVar4)) &&
                     ((iVar6 < *(int *)((int)this + 0x10) &&
                      ((iVar4 < *(int *)((int)this + 0x14) &&
                       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar6) * 0x30 +
                                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                    FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
                  }
                }
                iVar4 = iVar4 + 1;
                iVar6 = local_8 + -2;
              } while (iVar4 <= iVar8);
            }
            goto LAB_0043c10e;
          }
          if (iVar8 < local_10) {
            iVar9 = local_8 + -2;
            iVar6 = local_10 + 2;
            iVar4 = local_10 + -2;
            for (iVar8 = iVar4; iVar8 <= iVar6; iVar8 = iVar8 + 1) {
              pvVar3 = (void *)FUN_0043abf0(this,iVar9,iVar8);
              if (pvVar3 != (void *)0x0) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
              }
            }
            iVar7 = local_8 + 1;
            for (iVar8 = iVar9; iVar8 <= iVar7; iVar8 = iVar8 + 1) {
              if ((((-1 < iVar8) && (-1 < iVar6)) && (iVar8 < *(int *)((int)this + 0x10))) &&
                 ((iVar6 < *(int *)((int)this + 0x14) &&
                  (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar8) * 0x30 +
                                    *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
              }
            }
            iVar5 = local_8 + -3;
            iVar8 = local_10 + -3;
            for (iVar6 = iVar8; iVar1 = iVar9, iVar6 <= local_10 + 1; iVar6 = iVar6 + 1) {
              if (((-1 < iVar5) && (-1 < iVar6)) &&
                 ((iVar5 < *(int *)((int)this + 0x10) &&
                  ((iVar6 < *(int *)((int)this + 0x14) &&
                   (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar5) * 0x30 +
                                     *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
              }
            }
            for (; iVar1 <= iVar7; iVar1 = iVar1 + 1) {
              if ((((-1 < iVar1) && (-1 < iVar8)) && (iVar1 < *(int *)((int)this + 0x10))) &&
                 ((iVar8 < *(int *)((int)this + 0x14) &&
                  (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar8 + iVar1) * 0x30 +
                                    *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
              }
            }
            for (; iVar8 = iVar9, iVar4 <= local_10 + 1; iVar4 = iVar4 + 1) {
              for (; iVar8 <= iVar7; iVar8 = iVar8 + 1) {
                if (((-1 < iVar8) && (-1 < iVar4)) &&
                   ((iVar8 < *(int *)((int)this + 0x10) &&
                    ((iVar4 < *(int *)((int)this + 0x14) &&
                     (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar8) * 0x30 +
                                       *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                  FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
                }
              }
            }
            goto LAB_0043c10e;
          }
        }
        if ((local_8 < iVar4) && (local_10 < iVar8)) {
          iVar4 = local_10 + -2;
          for (iVar8 = iVar4; iVar8 <= local_10 + 2; iVar8 = iVar8 + 1) {
            pvVar3 = (void *)FUN_0043abf0(this,local_8 + -2,iVar8);
            if (pvVar3 != (void *)0x0) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar6 = local_8 + 2;
          iVar8 = local_8 + -1;
          for (iVar9 = iVar8; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
            if ((((-1 < iVar9) && (-1 < iVar4)) && (iVar9 < *(int *)((int)this + 0x10))) &&
               ((iVar4 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar9) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar7 = local_10 + 3;
          for (iVar9 = iVar8; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
            if (((-1 < iVar9) && (-1 < iVar7)) &&
               ((iVar9 < *(int *)((int)this + 0x10) &&
                ((iVar7 < *(int *)((int)this + 0x14) &&
                 (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar7 + iVar9) * 0x30 +
                                   *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          iVar5 = local_8 + 3;
          for (iVar9 = iVar4; iVar9 <= iVar7; iVar9 = iVar9 + 1) {
            if ((((-1 < iVar5) && (-1 < iVar9)) && (iVar5 < *(int *)((int)this + 0x10))) &&
               ((iVar9 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar9 + iVar5) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          for (; iVar9 = iVar8, iVar4 <= local_10 + 2; iVar4 = iVar4 + 1) {
            for (; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
              if (((-1 < iVar9) && (-1 < iVar4)) &&
                 ((iVar9 < *(int *)((int)this + 0x10) &&
                  ((iVar4 < *(int *)((int)this + 0x14) &&
                   (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar9) * 0x30 +
                                     *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
              }
            }
          }
        }
        else if ((iVar4 < local_8) && (local_10 < iVar8)) {
          iVar6 = local_10 + -2;
          iVar9 = local_8 + 1;
          iVar4 = local_8 + -2;
          for (iVar8 = iVar4; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
            pvVar3 = (void *)FUN_0043abf0(this,iVar8,iVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          for (; iVar6 <= local_10 + 2; iVar6 = iVar6 + 1) {
            pvVar3 = (void *)FUN_0043abf0(this,local_8 + 2,iVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar6 = local_10 + 3;
          for (iVar8 = iVar4; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
            if (((-1 < iVar8) && (-1 < iVar6)) &&
               ((iVar8 < *(int *)((int)this + 0x10) &&
                ((iVar6 < *(int *)((int)this + 0x14) &&
                 (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar6 + iVar8) * 0x30 +
                                   *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          iVar5 = local_8 + -3;
          iVar7 = local_10 + -1;
          for (iVar8 = iVar7; iVar8 <= iVar6; iVar8 = iVar8 + 1) {
            if ((((-1 < iVar5) && (-1 < iVar8)) && (iVar5 < *(int *)((int)this + 0x10))) &&
               ((iVar8 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar8 + iVar5) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          for (; iVar8 = iVar4, iVar7 <= local_10 + 2; iVar7 = iVar7 + 1) {
            for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
              if (((-1 < iVar8) && (-1 < iVar7)) &&
                 ((iVar8 < *(int *)((int)this + 0x10) &&
                  ((iVar7 < *(int *)((int)this + 0x14) &&
                   (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar7 + iVar8) * 0x30 +
                                     *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
              }
            }
          }
        }
        else if ((local_8 < iVar4) && (iVar8 < local_10)) {
          iVar4 = local_10 + -2;
          for (iVar8 = iVar4; iVar8 <= local_10 + 2; iVar8 = iVar8 + 1) {
            pvVar3 = (void *)FUN_0043abf0(this,local_8 + -2,iVar8);
            if (pvVar3 != (void *)0x0) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar9 = local_8 + 2;
          iVar8 = local_8 + -1;
          for (iVar6 = iVar8; iVar6 <= iVar9; iVar6 = iVar6 + 1) {
            pvVar3 = (void *)FUN_0043abf0(this,iVar6,local_10 + 2);
            if (pvVar3 != (void *)0x0) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,1);
            }
          }
          iVar7 = local_10 + -3;
          for (iVar6 = iVar8; iVar6 <= iVar9; iVar6 = iVar6 + 1) {
            if ((((-1 < iVar6) && (-1 < iVar7)) && (iVar6 < *(int *)((int)this + 0x10))) &&
               ((iVar7 < *(int *)((int)this + 0x14) &&
                (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar7 + iVar6) * 0x30 +
                                  *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          iVar6 = local_8 + 3;
          for (; iVar7 <= local_10 + 1; iVar7 = iVar7 + 1) {
            if (((-1 < iVar6) && (-1 < iVar7)) &&
               ((iVar6 < *(int *)((int)this + 0x10) &&
                ((iVar7 < *(int *)((int)this + 0x14) &&
                 (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar7 + iVar6) * 0x30 +
                                   *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
              FUN_0043c7d0(pvVar3,param_1,param_4,param_5,0);
            }
          }
          for (; iVar6 = iVar8, iVar4 <= local_10 + 1; iVar4 = iVar4 + 1) {
            for (; iVar6 <= iVar9; iVar6 = iVar6 + 1) {
              if ((((-1 < iVar6) && (-1 < iVar4)) && (iVar6 < *(int *)((int)this + 0x10))) &&
                 ((iVar4 < *(int *)((int)this + 0x14) &&
                  (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar6) * 0x30 +
                                    *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
                FUN_0043c7d0(pvVar3,param_1,param_4,param_5,2);
              }
            }
          }
        }
      }
    }
  }
LAB_0043c10e:
  piVar2 = (int *)FUN_00414c30(DAT_004e240c);
  if (((piVar2 != (int *)0x0) && (-1 < param_2)) && (-1 < param_3)) {
    iVar4 = (**(code **)(*piVar2 + 0x88))();
    iVar4 = *(int *)(iVar4 + 0x34);
    iVar8 = FUN_00412330((int)piVar2);
    FUN_0043ae30(this,param_2,param_3,iVar8,iVar4);
    if ((-1 < param_4) && (-1 < param_5)) {
      FUN_0043ae30(this,param_4,param_5,-iVar8,iVar4);
    }
  }
  return;
}

