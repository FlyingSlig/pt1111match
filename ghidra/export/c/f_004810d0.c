// FUNCTION: PORT1111 0x004810d0
// name: FUN_004810d0
// sig: undefined FUN_004810d0(void * this, int param_1)


void __thiscall FUN_004810d0(void *this,int param_1)

{
  if ((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) {
    if (param_1 != 0) {
      (**(code **)(**(int **)((int)this + 4) + 0x44))();
                    /* WARNING: Could not recover jumptable at 0x00481104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)((int)this + 8) + 0x44))();
      return;
    }
    (**(code **)(**(int **)((int)this + 4) + 0x48))(0x100);
                    /* WARNING: Could not recover jumptable at 0x00481118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 8) + 0x48))();
    return;
  }
  return;
}

