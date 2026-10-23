// FUNCTION: PORT1111 0x0046ffa0
// name: FUN_0046ffa0
// sig: undefined FUN_0046ffa0(void * this, int param_1)


void __thiscall FUN_0046ffa0(void *this,int param_1)

{
  if (param_1 == 0) {
    (**(code **)(*(int *)this + 0x48))(0x80000);
    if (*(int *)((int)this + 0x44) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0046ffe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(*(int *)((int)this + 0x44) + 4) + 0x40))();
      return;
    }
  }
  else {
    (**(code **)(*(int *)this + 0x44))();
    if (*(int *)((int)this + 0x44) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0046ffcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(*(int *)((int)this + 0x44) + 4) + 0x40))();
      return;
    }
  }
  return;
}

