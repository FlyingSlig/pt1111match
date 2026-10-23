// FUNCTION: PORT1111 0x00428ed0
// name: FUN_00428ed0
// sig: undefined FUN_00428ed0(void * this, int param_1)


void __thiscall FUN_00428ed0(void *this,int param_1)

{
  void *pvVar1;
  
  *(int *)((int)this + 0xc) = param_1;
  pvVar1 = operator_new(*(int *)((int)this + 0x10) * param_1 * 2);
  *(void **)((int)this + 4) = pvVar1;
  return;
}

