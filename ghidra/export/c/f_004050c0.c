// FUNCTION: PORT1111 0x004050c0
// name: FUN_004050c0
// sig: undefined4 FUN_004050c0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_004050c0(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 0x84) == param_1) && (*(int *)((int)this + 0x8c) == param_2)) {
    return 1;
  }
  return 0;
}

