// FUNCTION: PORT1111 0x0048f7b0
// name: FUN_0048f7b0
// sig: undefined FUN_0048f7b0(void * this, int * param_1, int param_2, int param_3)


void __thiscall FUN_0048f7b0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  HGDIOBJ pvVar2;
  HDC pHVar3;
  uint uVar4;
  int *piVar5;
  LOGPEN *pLVar6;
  tagRECT *ptVar7;
  tagRECT local_10;
  
  SetRect(&local_10,(int)*(short *)((int)this + 6),(int)*(short *)((int)this + 8),
          (int)*(short *)(*(int *)((int)this + 0xc) + 8) + (int)*(short *)((int)this + 6),
          (int)*(short *)(*(int *)((int)this + 0xc) + 10) + (int)*(short *)((int)this + 8));
  OffsetRect(&local_10,param_2 - local_10.left,param_3 - local_10.top);
  if (*(int *)(*(int *)((int)this + 0x10) + 0xa0) == 0) {
    uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x10) + 0x9c);
    piVar5 = (int *)(**(code **)(*param_1 + 0x70))();
    FUN_0047b660((void *)((int)this + 0x24),piVar5,local_10.left,local_10.top,local_10.right,
                 local_10.bottom,uVar4);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 != 0) {
    uVar4 = *(uint *)(*(int *)((int)this + 0x10) + 0x14);
    ptVar7 = &local_10;
    pLVar6 = (LOGPEN *)((int)this + 0x14);
    pvVar2 = (HGDIOBJ)(**(code **)(*param_1 + 0x14))();
    FUN_0048f740(pvVar2,pLVar6,&ptVar7->left,uVar4);
    return;
  }
  pHVar3 = (HDC)(**(code **)(*param_1 + 0x18))();
  FUN_0048f4c0(pHVar3,(LOGPEN *)((int)this + 0x14),&local_10.left,
               *(uint *)(*(int *)((int)this + 0x10) + 0x14));
  (**(code **)(*param_1 + 0x1c))(pHVar3);
  return;
}

