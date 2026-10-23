// FUNCTION: PORT1111 0x00459f50
// name: FUN_00459f50
// sig: undefined FUN_00459f50(void * this, ushort param_1)


void __thiscall FUN_00459f50(void *this,ushort param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)this + 0x308) + 0x14))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)((int)this + 0x4c) + 0x14))(param_1);
    (**(code **)(*(int *)((int)this + 0x5c4) + 0x14))(param_1);
  }
  else {
    FUN_00459d70((int)this);
  }
  FUN_00480c10(this,param_1,param_1);
  return;
}

