// FUNCTION: PORT1111 0x0044bf90
// name: FUN_0044bf90
// sig: undefined FUN_0044bf90(void * this, int param_1)


void __thiscall FUN_0044bf90(void *this,int param_1)

{
  if (param_1 == 1) {
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 100;
  }
  else if (param_1 == 2) {
    *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 100;
    return;
  }
  return;
}

