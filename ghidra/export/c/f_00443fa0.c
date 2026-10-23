// FUNCTION: PORT1111 0x00443fa0
// name: FUN_00443fa0
// sig: int FUN_00443fa0(void * this, void * param_1)


int __thiscall FUN_00443fa0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar3 = 0;
  local_4 = 9999999;
  iVar4 = 9999999;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x10)) {
        do {
          iVar1 = *(int *)(*(int *)((int)this + 4) +
                          (*(int *)((int)this + 0x14) * iVar3 + iVar4) * 4);
          if ((iVar1 < local_4) &&
             (iVar2 = FUN_00429830(DAT_004e2404,iVar4,iVar3,1,1,param_1), iVar2 != 0)) {
            local_4 = iVar1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this + 0x10));
      }
      iVar3 = iVar3 + 1;
      iVar4 = local_4;
    } while (iVar3 < *(int *)((int)this + 0x14));
  }
  return iVar4;
}

