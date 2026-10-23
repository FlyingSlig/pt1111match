// FUNCTION: PORT1111 0x0045f290
// name: FUN_0045f290
// sig: undefined4 FUN_0045f290(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_0045f290(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)((int)this + 0x38) + (*(int *)((int)this + 8) * param_1 + param_2) * 4);
}

