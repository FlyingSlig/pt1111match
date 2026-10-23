// FUNCTION: PORT1111 0x0047d610
// name: FUN_0047d610
// sig: undefined FUN_0047d610(void * this, undefined4 param_1, uint param_2)


void __thiscall FUN_0047d610(void *this,undefined4 param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 0x8c);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    while (*(ushort *)((int *)piVar2[2] + 0xb) != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar1) {
        return;
      }
    }
    (**(code **)(*(int *)piVar2[2] + 0x30))(param_1);
  }
  return;
}

