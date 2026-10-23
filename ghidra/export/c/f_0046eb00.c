// FUNCTION: PORT1111 0x0046eb00
// name: FUN_0046eb00
// sig: undefined FUN_0046eb00(void * this, int param_1, int param_2, undefined4 param_3)


void __thiscall FUN_0046eb00(void *this,int param_1,int param_2,undefined4 param_3)

{
  if (*(int **)((int)this + 0x804) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x804) + 0x44))
              (param_3,0,param_1 - *(int *)((int)this + 0x808),param_2 - *(int *)((int)this + 0x80c)
               ,0);
  }
  return;
}

