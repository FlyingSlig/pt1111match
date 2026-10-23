// FUNCTION: PORT1111 0x00405960
// name: FUN_00405960
// sig: bool FUN_00405960(void * this, int param_1)


bool __thiscall FUN_00405960(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x7c) == 0)) {
    iVar1 = *(int *)((int)this + 0x40);
    iVar2 = *(int *)(param_1 + 0x40);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      uVar3 = FUN_004051e0((int)*(short *)(iVar1 + 0x4e),(int)*(short *)(iVar1 + 0x4c),
                           (int)*(short *)(iVar2 + 0x4e),(int)*(short *)(iVar2 + 0x4c));
      return (int)uVar3 <= *(int *)(*(int *)((int)this + 0x50) + 0x4c);
    }
  }
  return false;
}

