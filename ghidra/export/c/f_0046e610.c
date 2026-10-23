// FUNCTION: PORT1111 0x0046e610
// name: FUN_0046e610
// sig: undefined4 FUN_0046e610(void * this, int param_1, int * param_2)


undefined4 __thiscall FUN_0046e610(void *this,int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 4) != 2) {
    (**(code **)(*(int *)this + 0x5c))();
    if (*(int *)((int)this + 8) == 1) {
      uVar1 = FUN_0046e1b0(this,param_1,param_2);
      return uVar1;
    }
    if (*(int *)((int)this + 8) == 2) {
      uVar1 = FUN_0046daa0(this,param_1,param_2);
      return uVar1;
    }
  }
  return 0;
}

