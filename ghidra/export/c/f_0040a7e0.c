// FUNCTION: PORT1111 0x0040a7e0
// name: FUN_0040a7e0
// sig: undefined FUN_0040a7e0(void * this, void * param_1)


void __thiscall FUN_0040a7e0(void *this,void *param_1)

{
  int *piVar1;
  
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  piVar1 = (int *)**(int **)((int)this + 0x14);
  if (piVar1 != *(int **)((int)this + 0x14)) {
    do {
      FUN_0042f670(param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x14));
  }
  return;
}

