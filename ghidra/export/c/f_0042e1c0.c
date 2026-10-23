// FUNCTION: PORT1111 0x0042e1c0
// name: FUN_0042e1c0
// sig: undefined FUN_0042e1c0(void * this, int param_1)


void __thiscall FUN_0042e1c0(void *this,int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar1 = (int *)**(int **)((int)this + 0xc);
  if (piVar1 != *(int **)((int)this + 0xc)) {
    do {
      FUN_0042de70(param_1,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0xc));
  }
  piVar1 = (int *)**(int **)((int)this + 0x18);
  if (piVar1 != *(int **)((int)this + 0x18)) {
    do {
      FUN_0042de70(param_1,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x18));
  }
  return;
}

