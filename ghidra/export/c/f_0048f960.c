// FUNCTION: PORT1111 0x0048f960
// name: FUN_0048f960
// sig: undefined FUN_0048f960(void * this, int * param_1, int param_2, int param_3)


void __thiscall FUN_0048f960(void *this,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  undefined4 uVar4;
  tagRECT *ptVar5;
  byte bVar6;
  ushort uVar7;
  tagRECT local_10;
  
  if ((*(byte *)(*(int *)((int)this + 0x10) + 0x9c) & 2) != 0) {
    SetRect(&local_10,(int)*(short *)((int)this + 6),(int)*(short *)((int)this + 8),
            (int)*(short *)(*(int *)((int)this + 0xc) + 8) + (int)*(short *)((int)this + 6),
            (int)*(short *)(*(int *)((int)this + 0xc) + 10) + (int)*(short *)((int)this + 8));
    OffsetRect(&local_10,param_2,param_3);
    uVar7 = 0;
    bVar6 = 0x50;
    ptVar5 = &local_10;
    piVar1 = (int *)(**(code **)(*param_1 + 0x70))();
    FUN_004880f0(piVar1,(ulonglong *)ptVar5,bVar6,uVar7);
  }
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (iVar2 != 0) {
    pvVar3 = (HGDIOBJ)(**(code **)(*param_1 + 0x14))();
    FUN_004728e0(*(void **)((int)this + 0x10),pvVar3);
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x18))();
  FUN_004705f0(*(int **)((int)this + 0x10));
  (**(code **)(*param_1 + 0x1c))(uVar4);
  return;
}

