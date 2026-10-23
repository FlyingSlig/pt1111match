// FUNCTION: PORT1111 0x0048f920
// name: FUN_0048f920
// sig: undefined4 * FUN_0048f920(void * this, int param_1, int param_2)


undefined4 * __thiscall FUN_0048f920(void *this,int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  FUN_0047bc60(this,param_2);
  *(int *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_004c6dd4;
  sVar1 = *(short *)(param_1 + 0x10);
  sVar2 = *(short *)(param_1 + 8);
  *(short *)(*(int *)((int)this + 0xc) + 8) = *(short *)(param_1 + 0xc) - *(short *)(param_1 + 4);
  *(short *)(*(int *)((int)this + 0xc) + 10) = sVar1 - sVar2;
  return this;
}

