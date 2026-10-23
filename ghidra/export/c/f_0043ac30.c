// FUNCTION: PORT1111 0x0043ac30
// name: FUN_0043ac30
// sig: undefined FUN_0043ac30(void * this, int * param_1, int param_2, int param_3)


void __thiscall FUN_0043ac30(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar5 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  iVar1 = iVar4 + -1;
  iVar2 = iVar5 + -1;
  if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar2 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  if (((-1 < iVar4) && (-1 < iVar2)) &&
     ((iVar4 < *(int *)((int)this + 0x10) &&
      ((iVar2 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar4) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  iVar1 = iVar4 + 1;
  if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar2 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  iVar2 = iVar4 + -1;
  if (((-1 < iVar2) && (-1 < iVar5)) &&
     ((iVar2 < *(int *)((int)this + 0x10) &&
      ((iVar5 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar2) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  if ((((-1 < iVar4) && (-1 < iVar5)) && (iVar4 < *(int *)((int)this + 0x10))) &&
     ((iVar5 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar4) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  if (((-1 < iVar1) && (-1 < iVar5)) &&
     ((iVar1 < *(int *)((int)this + 0x10) &&
      ((iVar5 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar1) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  iVar2 = iVar4 + -1;
  iVar5 = iVar5 + 1;
  if ((((-1 < iVar2) && (-1 < iVar5)) && (iVar2 < *(int *)((int)this + 0x10))) &&
     ((iVar5 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar2) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  if (((-1 < iVar4) && (-1 < iVar5)) &&
     ((iVar4 < *(int *)((int)this + 0x10) &&
      ((iVar5 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar4) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  if ((((-1 < iVar1) && (-1 < iVar5)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar5 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043ca20(pvVar3,param_1);
  }
  return;
}

