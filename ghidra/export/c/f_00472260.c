// FUNCTION: PORT1111 0x00472260
// name: FUN_00472260
// sig: undefined FUN_00472260(void * this, undefined4 param_1)


void __thiscall FUN_00472260(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x74) = param_1;
  *(undefined4 *)((int)this + 0x78) = param_1;
  if (*(int **)((int)this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb0) + 0x68))(param_1);
  }
  if (*(int **)((int)this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb4) + 0x68))(param_1);
  }
  if (*(int **)((int)this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb8) + 0x68))(param_1);
  }
  if (*(int **)((int)this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xbc) + 0x68))(param_1);
  }
  if (*(int **)((int)this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc4) + 0x68))(param_1);
  }
  if (*(int **)((int)this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x68))(param_1);
  }
  return;
}

