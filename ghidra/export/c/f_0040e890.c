// FUNCTION: PORT1111 0x0040e890
// name: FUN_0040e890
// sig: undefined FUN_0040e890(void * this, int param_1)


void __thiscall FUN_0040e890(void *this,int param_1)

{
  FUN_00404880((int)this);
  if (param_1 != 0) {
    FUN_00478920(*(void **)((int)this + 0x5c));
    return;
  }
  FUN_00478a10((int)*(void **)((int)this + 0x5c));
  return;
}

