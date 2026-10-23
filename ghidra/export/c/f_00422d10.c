// FUNCTION: PORT1111 0x00422d10
// name: FUN_00422d10
// sig: undefined FUN_00422d10(void * this, int param_1)


void __thiscall FUN_00422d10(void *this,int param_1)

{
  *(int *)(*(int *)((int)this + 0x60) + param_1 * 4) =
       *(int *)(*(int *)((int)this + 0x60) + param_1 * 4) + -1;
  *(undefined4 *)(*(int *)((int)this + 0x1fc) + param_1 * 4) = 1;
  return;
}

