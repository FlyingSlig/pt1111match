// FUNCTION: PORT1111 0x00404fc0
// name: FUN_00404fc0
// sig: undefined FUN_00404fc0(void * this, RECT * param_1)


void __thiscall FUN_00404fc0(void *this,RECT *param_1)

{
  int iVar1;
  BOOL BVar2;
  tagRECT local_10;
  
  CRect::NormalizeRect((CRect *)param_1);
  BVar2 = IsRectEmpty(param_1);
  if (BVar2 != 0) {
    param_1->right = param_1->right + 1;
    param_1->bottom = param_1->bottom + 1;
  }
  iVar1 = *(int *)((int)this + 0x50);
  local_10.bottom = *(int *)(iVar1 + 0x74) + *(int *)((int)this + 8);
  local_10.right = *(int *)(iVar1 + 0x70) + *(int *)((int)this + 4);
  local_10.top = *(int *)(iVar1 + 0x6c) + *(int *)((int)this + 8);
  local_10.left = *(int *)(iVar1 + 0x68) + *(int *)((int)this + 4);
  IntersectRect(&local_10,&local_10,param_1);
  return;
}

