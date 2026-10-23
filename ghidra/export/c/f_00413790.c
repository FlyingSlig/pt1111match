// FUNCTION: PORT1111 0x00413790
// name: FUN_00413790
// sig: undefined FUN_00413790(void * this, int * param_1)


void __thiscall FUN_00413790(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x40);
  if (param_1 == piVar1) {
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(piVar1[0x18] + 0x30) = 0;
    }
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x80))();
  (**(code **)*param_1)(1);
  return;
}

