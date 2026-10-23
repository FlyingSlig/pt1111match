// FUNCTION: PORT1111 0x00483820
// name: FUN_00483820
// sig: undefined FUN_00483820(void * this, int param_1, int param_2)


void __thiscall FUN_00483820(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8 [2];
  
  FUN_00483610(*(void **)((int)this + 0x2ac),local_8,&param_1);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  if (*(int *)((int)this + 4) != 0) {
    FUN_00481c50(*(void **)((int)this + 0x2a8));
  }
  if (param_2 != 0) {
    iVar1 = FUN_00482930(this,param_1);
    if (-1 < iVar1) {
      iVar2 = FUN_004810c0(*(int *)((int)this + 0x2a8));
      iVar3 = *(int *)((int)this + 0x20) + iVar2;
      if (*(int *)((int)this + 0x24) < iVar3) {
        iVar3 = *(int *)((int)this + 0x24);
      }
      if ((iVar2 <= iVar1) && (iVar1 <= iVar3)) {
        FUN_004823c0(this,iVar1);
        return;
      }
    }
    if ((*(int *)((int)this + 0x2a8) != 0) &&
       (iVar3 = FUN_004810c0(*(int *)((int)this + 0x2a8)), iVar1 < iVar3)) {
      FUN_004816d0(*(void **)((int)this + 0x2a8));
      iVar1 = FUN_004810c0(*(int *)((int)this + 0x2a8));
      FUN_004823c0(this,iVar1);
    }
  }
  return;
}

