// FUNCTION: PORT1111 0x00426c80
// name: FUN_00426c80
// sig: undefined FUN_00426c80(void * this, int param_1)


void __thiscall FUN_00426c80(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042a3a0(param_1);
  *(int *)((int)this + 0xc) = iVar1;
  if (*(int *)(iVar1 + 0x10) == -1) {
    FUN_00423e50(&DAT_004e26e8,*(int *)((int)this + 0x50));
  }
  else if (*(int *)((int)this + 0x24) == 0) {
    FUN_00423e90(&DAT_004e26e8,*(int *)((int)this + 0x50));
  }
  FUN_00421240((void *)(DAT_004e2404 + 0x94),this);
  return;
}

