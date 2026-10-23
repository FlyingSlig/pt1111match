// FUNCTION: PORT1111 0x00471390
// name: FUN_00471390
// sig: undefined FUN_00471390(void * this, int param_1)


void __thiscall FUN_00471390(void *this,int param_1)

{
  if (*(int **)((int)this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb4) + 0x60))(param_1 + 1);
  }
  if (*(int **)((int)this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb0) + 0x60))(param_1);
  }
  if (*(int **)((int)this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb8) + 0x60))(param_1 + 2);
  }
  if (*(int **)((int)this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xbc) + 0x60))(param_1 + 3);
  }
  if (*(int **)((int)this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc4) + 0x60))(param_1 + 4);
  }
  if (*(int **)((int)this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x60))(param_1 + 5);
  }
  return;
}

