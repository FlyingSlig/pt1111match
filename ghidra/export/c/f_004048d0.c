// FUNCTION: PORT1111 0x004048d0
// name: FUN_004048d0
// sig: int FUN_004048d0(void * this, int param_1)


int __thiscall FUN_004048d0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x138);
  while ((param_1 < *piVar2 || (*piVar2 + 8 <= param_1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0xb < iVar1) {
      return -1;
    }
  }
  return iVar1;
}

