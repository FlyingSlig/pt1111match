// FUNCTION: PORT1111 0x00406020
// name: FUN_00406020
// sig: uint FUN_00406020(void * this, int param_1)


uint __thiscall FUN_00406020(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((0x28 < param_1) && (param_1 < 0x47)) {
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    return (uint)(0 < *(int *)(iVar1 + -0x34 + param_1 * 4));
  }
  if ((0x46 < param_1) && (param_1 < 0x54)) {
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    return (uint)(0 < *(int *)(iVar1 + 0x50 + param_1 * 4));
  }
  if ((0xa9 < param_1) && (param_1 < 0xc5)) {
    uVar2 = FUN_00454e90(param_1 + -0xa8);
    return uVar2;
  }
  return 1;
}

