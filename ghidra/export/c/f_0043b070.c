// FUNCTION: PORT1111 0x0043b070
// name: FUN_0043b070
// sig: int FUN_0043b070(void * this, int param_1, int param_2, int param_3)


int __thiscall FUN_0043b070(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
  iVar5 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar1 = iVar4 + -1;
  param_1 = 0;
  iVar2 = iVar5 + -1;
  if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar2 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    param_1 = FUN_0043c7c0(pvVar3,param_3);
  }
  if (((-1 < iVar4) && (-1 < iVar2)) &&
     ((iVar4 < *(int *)((int)this + 0x10) &&
      ((iVar2 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar4) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    iVar1 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar1;
  }
  iVar1 = iVar4 + 1;
  if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar2 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    iVar2 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar2;
  }
  iVar2 = iVar4 + -1;
  if (((-1 < iVar2) && (-1 < iVar5)) &&
     ((iVar2 < *(int *)((int)this + 0x10) &&
      ((iVar5 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar2) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    iVar2 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar2;
  }
  if ((((-1 < iVar4) && (-1 < iVar5)) && (iVar4 < *(int *)((int)this + 0x10))) &&
     ((iVar5 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar4) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    iVar2 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar2;
  }
  if (((-1 < iVar1) && (-1 < iVar5)) &&
     ((iVar1 < *(int *)((int)this + 0x10) &&
      ((iVar5 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar1) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    iVar2 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar2;
  }
  iVar2 = iVar4 + -1;
  iVar5 = iVar5 + 1;
  if ((((-1 < iVar2) && (-1 < iVar5)) && (iVar2 < *(int *)((int)this + 0x10))) &&
     ((iVar5 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar2) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    iVar2 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar2;
  }
  if (((-1 < iVar4) && (-1 < iVar5)) &&
     ((iVar4 < *(int *)((int)this + 0x10) &&
      ((iVar5 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar4) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    iVar2 = FUN_0043c7c0(pvVar3,param_3);
    param_1 = param_1 + iVar2;
  }
  if ((((-1 < iVar1) && (-1 < iVar5)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar5 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    iVar1 = FUN_0043c7c0(pvVar3,param_3);
    return param_1 + iVar1;
  }
  return param_1;
}

