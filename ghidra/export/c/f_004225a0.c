// FUNCTION: PORT1111 0x004225a0
// name: FUN_004225a0
// sig: undefined FUN_004225a0(void * this, int param_1)


void __thiscall FUN_004225a0(void *this,int param_1)

{
  *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + param_1;
  FUN_00442660(*(int *)((int)this + 0x34),(int *)0x443);
  return;
}

