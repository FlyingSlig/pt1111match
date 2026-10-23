// FUNCTION: PORT1111 0x0043a600
// name: FUN_0043a600
// sig: int FUN_0043a600(void * this, uint param_1, int param_2, undefined4 param_3)


int __thiscall FUN_0043a600(void *this,uint param_1,int param_2,undefined4 param_3)

{
  if (((param_1 & 8) == 0) && (*(void **)((int)this + 0x10) != (void *)0x0)) {
    FUN_0042eb70(*(void **)((int)this + 0x10),&param_2);
  }
  FUN_0043a380(this);
  return (int)this;
}

