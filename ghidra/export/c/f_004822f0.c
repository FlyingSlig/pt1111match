// FUNCTION: PORT1111 0x004822f0
// name: FUN_004822f0
// sig: int FUN_004822f0(void * this, uint param_1)


int __thiscall FUN_004822f0(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    piVar1 = (int *)((int)this + 0x30);
    while (*(ushort *)(*piVar1 + 0x2c) != param_1) {
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)((int)this + 0x20) <= iVar3) {
        return -1;
      }
    }
    iVar2 = FUN_004810c0(*(int *)((int)this + 0x2a8));
    if (iVar2 + iVar3 < *(int *)((int)this + 0x24)) {
      return iVar2 + iVar3;
    }
  }
  return -1;
}

