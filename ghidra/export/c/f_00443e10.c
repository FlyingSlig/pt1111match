// FUNCTION: PORT1111 0x00443e10
// name: FUN_00443e10
// sig: undefined4 FUN_00443e10(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00443e10(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)((int)this + 4) + (*(int *)((int)this + 0x14) * param_2 + param_1) * 4);
}

