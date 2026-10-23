// FUNCTION: PORT1111 0x0040f3b0
// name: FUN_0040f3b0
// sig: undefined4 FUN_0040f3b0(void * this, int param_1, int * param_2, int * param_3)


undefined4 __thiscall FUN_0040f3b0(void *this,int param_1,int *param_2,int *param_3)

{
  void *this_00;
  int iVar1;
  int iStack_8;
  int iStack_4;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x14))();
  iVar1 = FUN_0047aeb0((void *)((int)this + 0x3c),param_1,param_2,param_3,&iStack_4,&iStack_8,iVar1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00478250(*(void **)((int)this + 0x24),*(uint *)(*(int *)((int)this + 0x34) + 0x80));
  iVar1 = 0;
  (**(code **)(**(int **)((int)this + 0x34) + 0xc))(iStack_4);
  this_00 = *(void **)((int)this + 0x5c);
  if ((((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x2c) & 1) != 0)) &&
      ((*(byte *)((int)this_00 + 0x2c) & 0x20) != 0)) && (*(short *)((int)this_00 + 0x2e) != -1)) {
    FUN_00478700(this_00,*(int *)((int)this + 0x10) + 8 + iVar1,
                 *(int *)((int)this + 0x14) + -10 + iStack_8);
  }
  return 1;
}

