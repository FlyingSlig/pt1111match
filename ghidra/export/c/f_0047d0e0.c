// FUNCTION: PORT1111 0x0047d0e0
// name: FUN_0047d0e0
// sig: undefined FUN_0047d0e0(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_0047d0e0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)((int)this + 0x8c);
  if (piVar1 != *(int **)((int)this + 0x8c)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x38))(param_1,param_2);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x8c));
  }
  return;
}

