// FUNCTION: PORT1111 0x004655e0
// name: FUN_004655e0
// sig: int FUN_004655e0(void * this, undefined4 param_1, int param_2)


int __thiscall FUN_004655e0(void *this,undefined4 param_1,int param_2)

{
  InterlockedIncrement((LONG *)&DAT_004e2a94);
  if (param_2 == 0) {
    param_2 = (int)this;
  }
  *(int *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  return (int)this;
}

