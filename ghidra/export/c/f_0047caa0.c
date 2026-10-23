// FUNCTION: PORT1111 0x0047caa0
// name: FUN_0047caa0
// sig: undefined FUN_0047caa0(void * this, undefined4 param_1)


void __thiscall FUN_0047caa0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)((int)this + 0x8c);
  if (piVar1 != *(int **)((int)this + 0x8c)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x90))(param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x8c));
  }
  return;
}

