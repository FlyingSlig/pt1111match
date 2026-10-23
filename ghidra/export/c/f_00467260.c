// FUNCTION: PORT1111 0x00467260
// name: FUN_00467260
// sig: undefined4 FUN_00467260(void * this, int * param_1)


undefined4 __thiscall FUN_00467260(void *this,int *param_1)

{
  (**(code **)(*(int *)this + 0x5c))();
  *(int **)((int)this + 0x2c) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  FUN_004671b0((int)this);
  return 1;
}

