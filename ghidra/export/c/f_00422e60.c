// FUNCTION: PORT1111 0x00422e60
// name: FUN_00422e60
// sig: undefined FUN_00422e60(void * this, int param_1, int param_2, int param_3)


void __thiscall FUN_00422e60(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 0) {
    piVar1 = (int *)((int)this + param_1 * 4 + 0xec);
    *piVar1 = *piVar1 + param_2;
    return;
  }
  piVar1 = (int *)((int)this + param_1 * 4 + 0x6c);
  *piVar1 = *piVar1 + param_2;
  return;
}

