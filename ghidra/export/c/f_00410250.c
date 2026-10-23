// FUNCTION: PORT1111 0x00410250
// name: FUN_00410250
// sig: int FUN_00410250(void * this, int param_1)


int __thiscall FUN_00410250(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1 * 0x1c;
  *(int *)((int)this + 0x128) = *(int *)(*(int *)((int)this + 0x50) + 0x198) + iVar2 + 4;
  iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0x198);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x14 + iVar2)) {
    iVar3 = 0;
    iVar5 = 0;
    do {
      *(int *)(iVar3 + 0x18 + *(int *)((int)this + 0x124)) =
           *(int *)(*(int *)(*(int *)((int)this + 0x50) + 0x198) + iVar2 + 0x18) + 8 + iVar5;
      iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0x198);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x18;
      iVar3 = iVar3 + 0x1c;
    } while (iVar4 < *(int *)(iVar1 + 0x14 + iVar2));
  }
  return iVar1 + iVar2;
}

