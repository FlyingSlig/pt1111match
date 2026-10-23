// FUNCTION: PORT1111 0x0047ae00
// name: FUN_0047ae00
// sig: undefined4 FUN_0047ae00(void * this, int param_1, int param_2, int param_3)


undefined4 __thiscall FUN_0047ae00(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  short sVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  
  *(int *)((int)this + 0x10) = param_1;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
  this_00 = *(void **)((int)this + 0x10);
  if ((*(byte *)((int)this_00 + 0x2c) & 1) == 0) {
    FUN_00478700(this_00,param_2,param_3);
    FUN_00478920(*(void **)((int)this + 0x10));
    return 1;
  }
  iVar4 = *(int *)(*(int *)((int)this_00 + 0x14) + 4);
  sVar2 = *(short *)((int)this_00 + 0x2e);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)((int)this_00 + 0x14) + 8) - iVar4 >> 2;
  }
  FUN_0047adb0(this_00,iVar4 + -1);
  pbVar1 = (byte *)(*(int *)((int)this + 0x10) + 0x2c);
  *pbVar1 = *pbVar1 | 0x88;
  iVar4 = *(int *)(*(int *)((int)this + 0x10) + 0x14);
  iVar3 = *(int *)(iVar4 + 4);
  if (iVar3 == 0) {
    *(int *)((int)this + 0x14) = (int)sVar2;
    return 1;
  }
  *(int *)((int)this + 0x14) =
       (*(int *)(iVar4 + 8) - iVar3 >> 2) * *(int *)(*(int *)((int)this + 0x10) + 0x4c) + (int)sVar2
  ;
  return 1;
}

