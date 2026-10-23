// FUNCTION: PORT1111 0x00426b20
// name: FUN_00426b20
// sig: undefined FUN_00426b20(void * this, int param_1)


void __thiscall FUN_00426b20(void *this,int param_1)

{
  if (param_1 == 0) {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
  }
  else {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  }
  if (*(int *)((int)this + 0x28) < 0) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}

