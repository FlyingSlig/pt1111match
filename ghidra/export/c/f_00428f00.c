// FUNCTION: PORT1111 0x00428f00
// name: FUN_00428f00
// sig: undefined FUN_00428f00(void * this, int param_1)


void __thiscall FUN_00428f00(void *this,int param_1)

{
  void *pvVar1;
  
  *(int *)((int)this + 8) = param_1;
  pvVar1 = operator_new(*(int *)((int)this + 0x10) * param_1 * 2);
  *(void **)this = pvVar1;
  return;
}

