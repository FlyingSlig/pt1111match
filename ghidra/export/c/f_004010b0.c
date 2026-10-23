// FUNCTION: PORT1111 0x004010b0
// name: FUN_004010b0
// sig: undefined FUN_004010b0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)


void __thiscall FUN_004010b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x804) = param_1;
  *(undefined4 *)((int)this + 0x808) = param_2;
  *(undefined4 *)((int)this + 0x80c) = param_3;
  return;
}

