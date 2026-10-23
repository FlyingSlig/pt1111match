// FUNCTION: PORT1111 0x0048a090
// name: FUN_0048a090
// sig: undefined FUN_0048a090(void * this, undefined4 * param_1)


void __thiscall FUN_0048a090(void *this,undefined4 *param_1)

{
  void *pvStack_c;
  
  pvStack_c = this;
  FUN_00466b20(&pvStack_c,param_1);
  (**(code **)(**(int **)((int)this + 4) + 0x1c))();
  return;
}

