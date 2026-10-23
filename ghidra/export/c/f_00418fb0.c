// FUNCTION: PORT1111 0x00418fb0
// name: FUN_00418fb0
// sig: undefined4 FUN_00418fb0(void * this, int param_1)


undefined4 __thiscall FUN_00418fb0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x44) != 0) {
    return *(undefined4 *)(*(int *)((int)this + 0x44) + param_1 * 4);
  }
  return 1;
}

