// FUNCTION: PORT1111 0x0043c180
// name: FUN_0043c180
// sig: undefined FUN_0043c180(void * this, int * param_1, int param_2, int param_3)


void __thiscall FUN_0043c180(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar4 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  if ((((iVar5 < 0) || (iVar4 < 0)) || (*(int *)((int)this + 0x10) <= iVar5)) ||
     (*(int *)((int)this + 0x14) <= iVar4)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 0x10) * iVar4 + iVar5) * 0x30 + *(int *)((int)this + 4);
  }
  FUN_0042aaf0(iVar2);
  iVar2 = iVar5 + -1;
  iVar1 = iVar4 + -1;
  if (((-1 < iVar2) && (-1 < iVar1)) &&
     ((iVar2 < *(int *)((int)this + 0x10) &&
      ((iVar1 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar2) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c960(pvVar3,param_1);
  }
  if ((((-1 < iVar5) && (-1 < iVar1)) && (iVar5 < *(int *)((int)this + 0x10))) &&
     ((iVar1 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar5) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c960(pvVar3,param_1);
  }
  iVar2 = iVar5 + 1;
  if (((-1 < iVar2) && (-1 < iVar1)) &&
     ((iVar2 < *(int *)((int)this + 0x10) &&
      ((iVar1 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar2) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c960(pvVar3,param_1);
  }
  iVar2 = iVar5 + -1;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < *(int *)((int)this + 0x10))) &&
     ((iVar4 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar2) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c960(pvVar3,param_1);
  }
  if (((-1 < iVar5) && (-1 < iVar4)) &&
     ((iVar5 < *(int *)((int)this + 0x10) &&
      ((iVar4 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar5) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c960(pvVar3,param_1);
  }
  iVar2 = iVar5 + 1;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < *(int *)((int)this + 0x10))) &&
     ((iVar4 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar2) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c960(pvVar3,param_1);
  }
  iVar2 = iVar5 + -1;
  iVar1 = iVar4 + 1;
  if (((-1 < iVar2) && (-1 < iVar1)) &&
     ((iVar2 < *(int *)((int)this + 0x10) &&
      ((iVar1 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar2) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c960(pvVar3,param_1);
  }
  if ((((-1 < iVar5) && (-1 < iVar1)) && (iVar5 < *(int *)((int)this + 0x10))) &&
     ((iVar1 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar5) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c960(pvVar3,param_1);
  }
  iVar2 = iVar5 + 1;
  if (((-1 < iVar2) && (-1 < iVar1)) &&
     ((iVar2 < *(int *)((int)this + 0x10) &&
      ((iVar1 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar2) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c960(pvVar3,param_1);
  }
  iVar2 = iVar4 + -2;
  if (iVar2 <= iVar4 + 2) {
    iVar1 = iVar5 + -2;
    do {
      for (; iVar1 <= iVar5 + 2; iVar1 = iVar1 + 1) {
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < *(int *)((int)this + 0x10))) &&
           ((iVar2 < *(int *)((int)this + 0x14) &&
            (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                              *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
          FUN_0043c7d0(pvVar3,param_1[4],-1,-1,1);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar5 + -2;
    } while (iVar2 <= iVar4 + 2);
  }
  iVar4 = (**(code **)(*param_1 + 0x88))();
  iVar4 = *(int *)(iVar4 + 0x34);
  iVar5 = FUN_00412330((int)param_1);
  if ((param_2 != -1) && (param_3 != -1)) {
    FUN_0043ae30(this,param_2,param_3,iVar5,iVar4);
  }
  return;
}

