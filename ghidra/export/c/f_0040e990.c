// FUNCTION: PORT1111 0x0040e990
// name: FUN_0040e990
// sig: undefined4 * FUN_0040e990(void * this, int param_1)


undefined4 * __thiscall FUN_0040e990(void *this,int param_1)

{
  FUN_0040e8f0(this,param_1);
  *(undefined ***)this = &PTR_FUN_004be64c;
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined ***)this = &PTR_FUN_004be670;
  return this;
}

