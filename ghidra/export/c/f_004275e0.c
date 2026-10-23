// FUNCTION: PORT1111 0x004275e0
// name: FUN_004275e0
// sig: undefined4 FUN_004275e0(void * this, undefined4 param_1)


undefined4 __thiscall FUN_004275e0(void *this,undefined4 param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 8) == 0) && (iVar1 = FUN_00426bf0(this,5), iVar1 == 0)) {
    return 0;
  }
  if ((*(int *)((int)this + 4) == *(int *)this) &&
     (iVar1 = FUN_00426bf0(this,*(int *)((int)this + 4) * 2), iVar1 == 0)) {
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return 1;
}

