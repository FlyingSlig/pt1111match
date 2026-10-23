// FUNCTION: PORT1111 0x004069e0
// name: FUN_004069e0
// sig: undefined4 * FUN_004069e0(void * this, int param_1)


undefined4 * __thiscall FUN_004069e0(void *this,int param_1)

{
  FUN_00408ae0(this,param_1,0x4010);
  *(undefined ***)this = &PTR_FUN_004bcc58;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bcc2c;
  *(undefined4 *)((int)this + 0x120) = 5;
  return this;
}

