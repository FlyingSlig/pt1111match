// FUNCTION: PORT1111 0x00438f90
// name: FUN_00438f90
// sig: undefined4 FUN_00438f90(void * this, undefined4 param_1)


undefined4 __thiscall FUN_00438f90(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 4))(param_1);
  uVar1 = (**(code **)(*(int *)this + 0xc))(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = (**(code **)(*(int *)this + 8))();
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

