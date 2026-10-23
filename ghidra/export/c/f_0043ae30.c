// FUNCTION: PORT1111 0x0043ae30
// name: FUN_0043ae30
// sig: undefined FUN_0043ae30(void * this, int param_1, int param_2, int param_3, int param_4)


void __thiscall FUN_0043ae30(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
  iVar4 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if ((((-1 < iVar5) && (-1 < iVar4)) && (iVar5 < *(int *)((int)this + 0x10))) &&
     ((iVar4 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar5) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c870(pvVar3,param_3,'\x01',param_4);
  }
  iVar1 = iVar5 + -1;
  iVar2 = iVar4 + -1;
  if (((-1 < iVar1) && (-1 < iVar2)) &&
     ((iVar1 < *(int *)((int)this + 0x10) &&
      ((iVar2 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  if ((((-1 < iVar5) && (-1 < iVar2)) && (iVar5 < *(int *)((int)this + 0x10))) &&
     ((iVar2 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar5) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  iVar1 = iVar5 + 1;
  if (((-1 < iVar1) && (-1 < iVar2)) &&
     ((iVar1 < *(int *)((int)this + 0x10) &&
      ((iVar2 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar2 + iVar1) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  iVar2 = iVar5 + -1;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < *(int *)((int)this + 0x10))) &&
     ((iVar4 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar2) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  if (((-1 < iVar1) && (-1 < iVar4)) &&
     ((iVar1 < *(int *)((int)this + 0x10) &&
      ((iVar4 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar1) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  iVar2 = iVar5 + -1;
  iVar4 = iVar4 + 1;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < *(int *)((int)this + 0x10))) &&
     ((iVar4 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar2) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  if (((-1 < iVar5) && (-1 < iVar4)) &&
     ((iVar5 < *(int *)((int)this + 0x10) &&
      ((iVar4 < *(int *)((int)this + 0x14) &&
       (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar5) * 0x30 +
                         *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  if ((((-1 < iVar1) && (-1 < iVar4)) && (iVar1 < *(int *)((int)this + 0x10))) &&
     ((iVar4 < *(int *)((int)this + 0x14) &&
      (pvVar3 = (void *)((*(int *)((int)this + 0x10) * iVar4 + iVar1) * 0x30 +
                        *(int *)((int)this + 4)), pvVar3 != (void *)0x0)))) {
    FUN_0043c870(pvVar3,param_3,'\0',param_4);
  }
  return;
}

