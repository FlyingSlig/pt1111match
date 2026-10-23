// FUNCTION: PORT1111 0x0042de50
// name: FUN_0042de50
// sig: undefined4 FUN_0042de50(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_0042de50(void *this,int param_1,int param_2)

{
  if ((*(int *)this == param_1) && (*(int *)((int)this + 4) == param_2)) {
    return 1;
  }
  return 0;
}

