// FUNCTION: PORT1111 0x00478450
// name: FUN_00478450
// sig: undefined FUN_00478450(void * this, undefined4 param_1)


void __thiscall FUN_00478450(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc) = param_1;
  if (*(int *)((int)this + 0x60) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x60) + 0xc) = param_1;
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x5c) + 0xc) = param_1;
  }
  return;
}

