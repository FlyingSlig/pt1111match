// FUNCTION: PORT1111 0x00453550
// name: FUN_00453550
// sig: undefined FUN_00453550(void * this, int param_1)


void __thiscall FUN_00453550(void *this,int param_1)

{
  *(int *)((int)this + 0x18) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
    (**(code **)(*(int *)this + 0xc))();
    return;
  }
  if (*(int *)((int)this + 0x14) <= param_1) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x14) + -1;
  }
  (**(code **)(*(int *)this + 0xc))();
  return;
}

