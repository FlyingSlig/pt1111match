// FUNCTION: PORT1111 0x0043e750
// name: FUN_0043e750
// sig: undefined FUN_0043e750(void * this, int param_1)


void __thiscall FUN_0043e750(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  local_8 = param_1;
  FUN_00413aa0((void *)((int)this + 0x10),&local_4,&local_8);
  if (local_4 == *(int *)((int)this + 0x14)) {
    piVar2 = FUN_0042c280((void *)((int)this + 0x10),&param_1);
    *piVar2 = iVar1;
  }
  return;
}

