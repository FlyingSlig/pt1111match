// FUNCTION: PORT1111 0x00412090
// name: FUN_00412090
// sig: undefined4 * FUN_00412090(void * this, int param_1, uint param_2)


undefined4 * __thiscall FUN_00412090(void *this,int param_1,uint param_2)

{
  FUN_00405220(this,param_1,param_2 | 4);
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined ***)this = &PTR_FUN_004beaf8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004beacc;
  *(undefined4 *)((int)this + 0x104) = 3;
  *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
  return this;
}

