// FUNCTION: PORT1111 0x0040f460
// name: FUN_0040f460
// sig: int FUN_0040f460(void * this, int param_1)


int __thiscall FUN_0040f460(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x50);
  if ((param_1 < *(int *)(iVar1 + 0x13c)) || (*(int *)(iVar1 + 0x13c) + 8 <= param_1)) {
    if ((*(int *)(iVar1 + 0x150) <= param_1) &&
       ((param_1 < *(int *)(iVar1 + 0x150) + 8 && (*(int *)(iVar1 + 0x154) != 0)))) {
      iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x50);
      return (*(int *)(iVar1 + 0x154) - *(int *)(iVar1 + 0x150)) + param_1;
    }
  }
  else if (*(int *)(iVar1 + 0x140) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x50);
    return (*(int *)(iVar1 + 0x140) - *(int *)(iVar1 + 0x13c)) + param_1;
  }
  return param_1;
}

