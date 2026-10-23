// FUNCTION: PORT1111 0x00407b10
// name: FUN_00407b10
// sig: undefined FUN_00407b10(void * this, int param_1)


void __thiscall FUN_00407b10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float10 extraout_ST0;
  ulonglong uVar3;
  
  uVar3 = FUN_00497d88();
  iVar2 = (int)uVar3;
  *(int *)((int)this + 0x54) = iVar2;
  *(float *)((int)this + 0xf4) = (float)(extraout_ST0 - (float10)iVar2);
  iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0xa8);
  if (iVar1 < iVar2) {
    *(int *)((int)this + 0x54) = iVar1;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0xfc);
  if (iVar1 < param_1) {
    *(int *)((int)this + 0xfc) = iVar1;
    return;
  }
  *(int *)((int)this + 0xfc) = param_1;
  return;
}

