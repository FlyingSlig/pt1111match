// FUNCTION: PORT1111 0x0047bad0
// name: FUN_0047bad0
// sig: undefined4 FUN_0047bad0(void * this, undefined4 param_1)


undefined4 __thiscall FUN_0047bad0(void *this,undefined4 param_1)

{
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 4) = 0xffff;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 4) = param_1;
  return 1;
}

