// FUNCTION: PORT1111 0x0042cfa0
// name: FUN_0042cfa0
// sig: undefined4 FUN_0042cfa0(void * this, int * param_1)


undefined4 __thiscall FUN_0042cfa0(void *this,int *param_1)

{
  *(int *)((int)this + 8) = *(int *)((int)this + 0x58) + *param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0x5c) + param_1[1];
  *(int *)((int)this + 0x10) = *(int *)((int)this + 100) + *param_1;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x60) + param_1[1];
  *(undefined4 *)((int)this + 0x54) = 0;
  return 1;
}

