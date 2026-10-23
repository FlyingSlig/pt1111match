// FUNCTION: PORT1111 0x00411420
// name: FUN_00411420
// sig: undefined4 * FUN_00411420(void * this, int param_1)


undefined4 * __thiscall FUN_00411420(void *this,int param_1)

{
  FUN_004124b0(this,param_1,1);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined ***)this = &PTR_FUN_004be968;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004be93c;
  return this;
}

