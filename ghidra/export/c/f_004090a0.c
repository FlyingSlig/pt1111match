// FUNCTION: PORT1111 0x004090a0
// name: FUN_004090a0
// sig: undefined FUN_004090a0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)


void __thiscall FUN_004090a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return;
}

