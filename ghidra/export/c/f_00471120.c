// FUNCTION: PORT1111 0x00471120
// name: FUN_00471120
// sig: undefined4 FUN_00471120(void * this, undefined4 param_1)


undefined4 __thiscall FUN_00471120(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x48) = param_1;
  if ((*(int **)((int)this + 0xb0) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0xb0) + 0xc))(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int **)((int)this + 0xb4) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0xb4) + 0xc))(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int **)((int)this + 0xb8) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0xb8) + 0xc))(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int **)((int)this + 0xbc) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0xbc) + 0xc))(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int **)((int)this + 0xc4) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0xc4) + 0xc))(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int **)((int)this + 0xc0) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0xc0) + 0xc))(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

