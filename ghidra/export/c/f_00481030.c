// FUNCTION: PORT1111 0x00481030
// name: FUN_00481030
// sig: undefined FUN_00481030(void * this, int param_1)


void __thiscall FUN_00481030(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x68) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x68) + 0x20), iVar1 < param_1)) {
    *(int *)((int)this + 0x14) = iVar1;
    return;
  }
  *(int *)((int)this + 0x14) = param_1;
  return;
}

