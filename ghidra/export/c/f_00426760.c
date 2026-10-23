// FUNCTION: PORT1111 0x00426760
// name: FUN_00426760
// sig: undefined1 FUN_00426760(void * this, int param_1)


undefined1 __thiscall FUN_00426760(void *this,int param_1)

{
  if (*(char *)((int)this + 0x2c) <= param_1) {
    return 0xff;
  }
  return *(undefined1 *)(param_1 + *(int *)((int)this + 0x10));
}

