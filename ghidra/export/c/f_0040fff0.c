// FUNCTION: PORT1111 0x0040fff0
// name: FUN_0040fff0
// sig: undefined4 * FUN_0040fff0(void * this, int param_1)


undefined4 * __thiscall FUN_0040fff0(void *this,int param_1)

{
  FUN_00408ae0(this,param_1,0x20);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined ***)this = &PTR_FUN_004be7c0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004be794;
  return this;
}

