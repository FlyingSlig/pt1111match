// FUNCTION: PORT1111 0x0046a5d0
// name: FUN_0046a5d0
// sig: undefined FUN_0046a5d0(void * this, int param_1)


void __thiscall FUN_0046a5d0(void *this,int param_1)

{
  *(int *)((int)this + 0x68) = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0xc);
  }
  return;
}

