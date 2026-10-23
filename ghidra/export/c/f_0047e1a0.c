// FUNCTION: PORT1111 0x0047e1a0
// name: FUN_0047e1a0
// sig: undefined4 FUN_0047e1a0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)


undefined4 __thiscall
FUN_0047e1a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_3;
  *(undefined4 *)((int)this + 0x28) = param_2;
  return 1;
}

