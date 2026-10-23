// FUNCTION: PORT1111 0x004786d0
// name: FUN_004786d0
// sig: undefined4 FUN_004786d0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_004786d0(void *this,int param_1,int param_2)

{
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x80;
  if ((param_1 != *(int *)((int)this + 4)) || (param_2 != *(int *)((int)this + 8))) {
    *(int *)((int)this + 4) = param_1;
    *(int *)((int)this + 8) = param_2;
    FUN_0041f5e0(this);
  }
  return 1;
}

