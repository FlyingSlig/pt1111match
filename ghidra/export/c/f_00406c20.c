// FUNCTION: PORT1111 0x00406c20
// name: FUN_00406c20
// sig: undefined FUN_00406c20(void * this, RECT * param_1)


void __thiscall FUN_00406c20(void *this,RECT *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  tagRECT local_10;
  
  CRect::NormalizeRect((CRect *)param_1);
  BVar3 = IsRectEmpty(param_1);
  if (BVar3 != 0) {
    param_1->right = param_1->right + 1;
    param_1->bottom = param_1->bottom + 1;
  }
  iVar2 = *(int *)((int)this + 0x50);
  iVar4 = (*(uint *)((int)this + 0x120) & (4 < (int)*(uint *)((int)this + 0x120)) - 1) * 0x30;
  iVar1 = iVar4 + 0x2b0 + iVar2;
  local_10.bottom = *(int *)(iVar4 + 0x2cc + iVar2) + *(int *)((int)this + 8);
  local_10.right = *(int *)(iVar1 + 0x18) + *(int *)((int)this + 4);
  local_10.top = *(int *)(iVar4 + 0x2c4 + iVar2) + *(int *)((int)this + 8);
  local_10.left = *(int *)(iVar1 + 0x10) + *(int *)((int)this + 4);
  IntersectRect(&local_10,&local_10,param_1);
  return;
}

