// FUNCTION: PORT1111 0x0047fd90
// name: FUN_0047fd90
// sig: undefined FUN_0047fd90(void * this, int param_1)


void __thiscall FUN_0047fd90(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = param_1;
    (**(code **)(*(int *)this + 8))();
  }
  return;
}

