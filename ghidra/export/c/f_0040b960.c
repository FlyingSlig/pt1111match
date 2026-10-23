// FUNCTION: PORT1111 0x0040b960
// name: FUN_0040b960
// sig: undefined FUN_0040b960(void * this, int param_1)


void __thiscall FUN_0040b960(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_0040b530((int)this);
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0x30);
  piVar2 = FUN_0040b880((void *)((int)this + 4),&param_1);
  *piVar2 = iVar1;
  return;
}

