// FUNCTION: PORT1111 0x0043a5c0
// name: FUN_0043a5c0
// sig: void * FUN_0043a5c0(void * this, byte param_1, int param_2, int param_3)


void * __thiscall FUN_0043a5c0(void *this,byte param_1,int param_2,int param_3)

{
  if (*(int **)((int)this + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0x10))(&param_2);
  }
  FUN_0043a480(this,param_1,param_2,param_3);
  return this;
}

