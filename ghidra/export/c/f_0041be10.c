// FUNCTION: PORT1111 0x0041be10
// name: FUN_0041be10
// sig: undefined4 * FUN_0041be10(void * this, int param_1)


undefined4 * __thiscall FUN_0041be10(void *this,int param_1)

{
  FUN_00411420(this,param_1);
  *(undefined ***)this = &PTR_FUN_004bf520;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bf4f8;
  *(undefined4 *)((int)this + 0x70) = 0;
  return this;
}

