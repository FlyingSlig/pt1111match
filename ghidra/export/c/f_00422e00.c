// FUNCTION: PORT1111 0x00422e00
// name: FUN_00422e00
// sig: undefined FUN_00422e00(void * this, int param_1)


void __thiscall FUN_00422e00(void *this,int param_1)

{
  *(uint *)(*(int *)((int)this + 0x60) + param_1 * 4) =
       *(uint *)(*(int *)((int)this + 0x60) + param_1 * 4) | 0x40000000;
  *(undefined4 *)(*(int *)((int)this + 0x1fc) + param_1 * 4) = 0;
  return;
}

