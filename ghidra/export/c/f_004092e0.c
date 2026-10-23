// FUNCTION: PORT1111 0x004092e0
// name: FUN_004092e0
// sig: undefined4 * FUN_004092e0(void * this, int param_1, uint param_2)


undefined4 * __thiscall FUN_004092e0(void *this,int param_1,uint param_2)

{
  FUN_004090e0(this,param_1,param_2 | 0x20000);
  *(undefined ***)this = &PTR_FUN_004bd1f0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bd1c8;
  return this;
}

