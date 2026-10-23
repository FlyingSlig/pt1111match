// FUNCTION: PORT1111 0x0045f030
// name: FUN_0045f030
// sig: undefined4 FUN_0045f030(void * this, int param_1)


undefined4 __thiscall FUN_0045f030(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x10) = param_1;
  iVar1 = FUN_0045f270(param_1);
  *(int *)((int)this + 4) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

