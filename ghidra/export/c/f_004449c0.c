// FUNCTION: PORT1111 0x004449c0
// name: FUN_004449c0
// sig: undefined FUN_004449c0(void * this, undefined4 param_1)


void __thiscall FUN_004449c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  return;
}

