// FUNCTION: PORT1111 0x0047e8e0
// name: FUN_0047e8e0
// sig: undefined4 FUN_0047e8e0(void * this, uint param_1, uint param_2)


undefined4 __thiscall FUN_0047e8e0(void *this,uint param_1,uint param_2)

{
  void *this_00;
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)((int)this + 4) == 0) || (*(int *)(*(int *)((int)this + 4) + 4) == 2)) {
    return 0;
  }
  uVar1 = FUN_0047e810((int)this);
  if (param_1 == uVar1) {
    uVar1 = FUN_0047e870((int)this);
    if (param_2 == uVar1) {
      return 1;
    }
  }
  piVar2 = FUN_0046e960(*(void **)((int)this + 4),param_1,param_2);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if ((*(int *)((int)this + 0xc) != 0) && (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  this_00 = *(void **)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 1;
  *(int **)((int)this + 4) = piVar2;
  if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) != 2)) {
    piVar2 = FUN_0046e280(this_00,param_1,param_2);
    if (piVar2 != (int *)0x0) {
      FUN_0047e250((int)this);
      *(int **)((int)this + 8) = piVar2;
    }
  }
  return 1;
}

