// FUNCTION: PORT1111 0x004176c0
// name: FUN_004176c0
// sig: undefined FUN_004176c0(void * this, int param_1)


void __thiscall FUN_004176c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0x10);
  piVar2 = FUN_00417480((void *)((int)this + 0x1c),&param_1);
  *piVar2 = iVar1;
  return;
}

