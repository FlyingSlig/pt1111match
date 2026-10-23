// FUNCTION: PORT1111 0x00404580
// name: FUN_00404580
// sig: undefined FUN_00404580(void * this, int param_1)


void __thiscall FUN_00404580(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x24) != 0) &&
     (*(short *)(*(int *)((int)this + 0x24) + 0x34) == param_1)) {
    return;
  }
  FUN_00475080(*(int *)((int)this + 4));
  return;
}

