// FUNCTION: PORT1111 0x0043d1d0
// name: FUN_0043d1d0
// sig: undefined4 FUN_0043d1d0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_0043d1d0(void *this,int param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)((int)this + 8);
  if (piVar2 != *(int **)((int)this + 8)) {
    do {
      this_00 = (void *)piVar2[2];
      if (((*(int *)((int)this_00 + 0x10) == 0) && (*(int *)((int)this_00 + 4) == param_1)) &&
         (iVar1 = FUN_0043cdf0(this_00,param_2), iVar1 != 0)) {
        return 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 8));
  }
  return 0;
}

