// FUNCTION: PORT1111 0x0040d630
// name: FUN_0040d630
// sig: undefined FUN_0040d630(void * this, RECT * param_1)


void __thiscall FUN_0040d630(void *this,RECT *param_1)

{
  BOOL BVar1;
  int iVar2;
  tagRECT local_10;
  
  CRect::NormalizeRect((CRect *)param_1);
  BVar1 = IsRectEmpty(param_1);
  if (BVar1 != 0) {
    param_1->right = param_1->right + 1;
    param_1->bottom = param_1->bottom + 1;
  }
  iVar2 = *(int *)((int)this + 0x13c) * 0x10;
  local_10.left = *(int *)(&DAT_004d54e8 + iVar2) + *(int *)((int)this + 4);
  local_10.top = *(int *)(&DAT_004d54ec + iVar2) + *(int *)((int)this + 8);
  local_10.right = *(int *)(&DAT_004d54f0 + iVar2) + *(int *)((int)this + 4);
  local_10.bottom = *(int *)(&DAT_004d54f4 + iVar2) + *(int *)((int)this + 8);
  IntersectRect(&local_10,&local_10,param_1);
  return;
}

