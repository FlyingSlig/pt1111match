// FUNCTION: PORT1111 0x004712a0
// name: FUN_004712a0
// sig: int * FUN_004712a0(void * this, undefined4 param_1)


int * __thiscall FUN_004712a0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  switch(param_1) {
  case 0:
    piVar1 = (int *)((int)this + 0xb0);
    break;
  case 1:
    piVar1 = (int *)((int)this + 0xb4);
    break;
  case 2:
    piVar1 = (int *)((int)this + 0xb8);
    break;
  case 3:
    piVar1 = (int *)((int)this + 0xbc);
    break;
  case 4:
    piVar1 = (int *)((int)this + 0xc4);
    break;
  case 5:
    piVar1 = (int *)((int)this + 0xc0);
    break;
  default:
    return (int *)0x0;
  }
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0x54))();
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    *piVar1 = 0;
  }
  return piVar1;
}

