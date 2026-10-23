// FUNCTION: PORT1111 0x0046c280
// name: FUN_0046c280
// sig: undefined FUN_0046c280(void * this, uint param_1, int * param_2)


void __thiscall FUN_0046c280(void *this,uint param_1,int *param_2)

{
  undefined1 uVar1;
  
  if (*(int *)((int)this + 4) != 2) {
    uVar1 = (**(code **)(*(int *)this + 0xc))();
    switch(uVar1) {
    case 8:
      FUN_0046beb0(this,param_1);
      return;
    case 0x10:
      FUN_0046bef0(this,param_1,param_2);
      return;
    case 0x18:
      FUN_0046c170(this,param_1);
      return;
    case 0x20:
      FUN_0046c080(this,param_1);
    }
  }
  return;
}

