// FUNCTION: PORT1111 0x0045c5e0
// name: FUN_0045c5e0
// sig: undefined FUN_0045c5e0(void * this, void * param_1)


void __thiscall FUN_0045c5e0(void *this,void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)((int)this + 0x10);
  FUN_0042f670(param_1);
  if (piVar1 != *(int **)((int)this + 0x10)) {
    do {
      FUN_0045c460(param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x10));
  }
  return;
}

