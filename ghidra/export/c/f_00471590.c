// FUNCTION: PORT1111 0x00471590
// name: FUN_00471590
// sig: undefined FUN_00471590(void * this, LPRECT param_1)


void __thiscall FUN_00471590(void *this,LPRECT param_1)

{
  tagRECT local_10;
  
  SetRect(&local_10,*(int *)((int)this + 4),*(int *)((int)this + 8),*(int *)((int)this + 0xc),
          *(int *)((int)this + 0x10));
  param_1->left = local_10.left;
  param_1->top = local_10.top;
  param_1->right = local_10.right;
  param_1->bottom = local_10.bottom;
  if (*(int **)((int)this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc4) + 0x30))(&local_10);
    UnionRect(param_1,param_1,&local_10);
  }
  if (*(int **)((int)this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb0) + 0x30))(&local_10);
    UnionRect(param_1,param_1,&local_10);
  }
  if (*(int **)((int)this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb4) + 0x30))(&local_10);
    UnionRect(param_1,param_1,&local_10);
  }
  if (*(int **)((int)this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb8) + 0x30))(&local_10);
    UnionRect(param_1,param_1,&local_10);
  }
  if (*(int **)((int)this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xbc) + 0x30))(&local_10);
    UnionRect(param_1,param_1,&local_10);
  }
  if (*(int **)((int)this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x30))(&local_10);
    UnionRect(param_1,param_1,(RECT *)&stack0xffffffec);
  }
  return;
}

