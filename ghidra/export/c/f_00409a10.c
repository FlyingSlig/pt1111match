// FUNCTION: PORT1111 0x00409a10
// name: FUN_00409a10
// sig: undefined FUN_00409a10(void * this, int param_1)


void __thiscall FUN_00409a10(void *this,int param_1)

{
  *(int *)((int)this + 0x124) = *(int *)((int)this + 0x124) + param_1;
  FUN_00445030(*(void **)((int)this + 0xb0),0x3f1);
  if (param_1 < 0) {
    FUN_00455220(DAT_004e2410);
  }
  return;
}

