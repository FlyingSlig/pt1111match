// FUNCTION: PORT1111 0x00422c70
// name: FUN_00422c70
// sig: undefined FUN_00422c70(void * this, int param_1)


void __thiscall FUN_00422c70(void *this,int param_1)

{
  *(int *)((int)this + 0x38) = param_1;
  if (0 < param_1) {
    FUN_0043d310(*(void **)((int)this + 0x20c),param_1);
  }
  FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3ee);
  return;
}

