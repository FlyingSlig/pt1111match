// FUNCTION: PORT1111 0x004520b0
// name: FUN_004520b0
// sig: undefined FUN_004520b0(void * this, uint * param_1, uint * param_2)


void __thiscall FUN_004520b0(void *this,uint *param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_0047baa0(*(int *)((int)this + 0xc));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *param_1 = 0;
    *param_2 = 0;
    return;
  }
  *param_1 = (uint)*(byte *)(*(int *)((int)this + 0xc) + 0x10);
  *param_2 = (uint)*(byte *)(*(int *)((int)this + 0xc) + 0x11);
  return;
}

