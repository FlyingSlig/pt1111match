// FUNCTION: PORT1111 0x00478700
// name: FUN_00478700
// sig: undefined4 FUN_00478700(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00478700(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - *(short *)((int)this + 0x32);
  iVar2 = param_1 - *(short *)((int)this + 0x30);
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x80;
  if ((iVar2 != *(int *)((int)this + 4)) || (iVar1 != *(int *)((int)this + 8))) {
    *(int *)((int)this + 4) = iVar2;
    *(int *)((int)this + 8) = iVar1;
    FUN_0041f5e0(this);
  }
  return 1;
}

