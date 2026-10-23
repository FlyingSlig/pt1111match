// FUNCTION: PORT1111 0x00481230
// name: FUN_00481230
// sig: undefined4 * FUN_00481230(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_00481230(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if (*(int *)((int)this + 0x44) != 0) {
    uVar2 = FUN_00497d88();
    *param_1 = *(undefined4 *)((int)this + 0x58);
    param_1[1] = (int)uVar2;
    return param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 0x5c);
  uVar2 = FUN_00497d88();
  param_1[1] = uVar1;
  *param_1 = (int)uVar2;
  return param_1;
}

