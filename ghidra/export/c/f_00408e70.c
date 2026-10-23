// FUNCTION: PORT1111 0x00408e70
// name: FUN_00408e70
// sig: undefined4 * FUN_00408e70(void * this, int param_1, uint param_2)


undefined4 * __thiscall FUN_00408e70(void *this,int param_1,uint param_2)

{
  FUN_00412090(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_004bced8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bceac;
  return this;
}

