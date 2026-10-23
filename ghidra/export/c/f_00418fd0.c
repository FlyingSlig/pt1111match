// FUNCTION: PORT1111 0x00418fd0
// name: FUN_00418fd0
// sig: undefined4 FUN_00418fd0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00418fd0(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x44) != 0) {
    return *(undefined4 *)
            (*(int *)((int)this + 0x44) + (*(int *)((int)this + 0x2c) * param_2 + param_1) * 4);
  }
  return 1;
}

