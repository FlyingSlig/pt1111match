// FUNCTION: PORT1111 0x00480c10
// name: FUN_00480c10
// sig: undefined4 FUN_00480c10(void * this, ushort param_1, ushort param_2)


undefined4 __thiscall FUN_00480c10(void *this,ushort param_1,ushort param_2)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x24) + 0x1c);
  }
  if (param_2 == uVar1) {
    uVar1 = (uint)param_1;
    if (uVar1 == *(uint *)((int)this + 0x2c)) {
      (**(code **)(*(int *)this + 0xa8))();
      return 1;
    }
    if (uVar1 == *(uint *)((int)this + 0x30)) {
      (**(code **)(*(int *)this + 0xb0))();
      return 1;
    }
    if (uVar1 == *(uint *)((int)this + 0x28)) {
      (**(code **)(*(int *)this + 0xac))();
      return 1;
    }
  }
  return 0;
}

