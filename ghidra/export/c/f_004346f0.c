// FUNCTION: PORT1111 0x004346f0
// name: FUN_004346f0
// sig: undefined FUN_004346f0(void * this, int * param_1)


void __thiscall FUN_004346f0(void *this,int *param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)((int)this + 0x1d8) + 4))();
  piVar1 = param_1;
  (**(code **)(*param_1 + 0xc))();
  param_1 = piVar1;
  (**(code **)(*(int *)((int)this + 0x138) + 4))();
  FUN_00434410((void *)((int)this + 0x124),&param_1);
  (**(code **)(*(int *)((int)this + 0x138) + 8))();
  FUN_00480070((void *)((int)this + 0x4c),0);
  (**(code **)(*(int *)((int)this + 0x1d8) + 8))();
  return;
}

