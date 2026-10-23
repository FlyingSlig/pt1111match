// FUNCTION: PORT1111 0x00471e00
// name: FUN_00471e00
// sig: undefined FUN_00471e00(void * this, int param_1)


void __thiscall FUN_00471e00(void *this,int param_1)

{
  if (*(int *)((int)this + 0xa0) == 0) {
    *(undefined4 *)((int)this + 0xa0) = 1;
    if (param_1 != 0) {
      (**(code **)(*(int *)this + 0x44))(1);
    }
    FUN_00471c70((int)this);
  }
  return;
}

