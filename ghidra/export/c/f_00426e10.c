// FUNCTION: PORT1111 0x00426e10
// name: FUN_00426e10
// sig: undefined FUN_00426e10(void * this, int param_1, undefined1 param_2)


void __thiscall FUN_00426e10(void *this,int param_1,undefined1 param_2)

{
  if (*(char *)((int)this + 0x2c) <= param_1) {
    FUN_00426780(this,(uint *)(param_1 + 1));
    *(undefined1 *)(param_1 + *(int *)((int)this + 0x10)) = param_2;
    return;
  }
  *(undefined1 *)(param_1 + *(int *)((int)this + 0x10)) = param_2;
  return;
}

