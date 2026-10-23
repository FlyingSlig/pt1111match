// FUNCTION: PORT1111 0x00417670
// name: FUN_00417670
// sig: undefined FUN_00417670(void * this, int param_1)


void __thiscall FUN_00417670(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0x10);
  piVar2 = FUN_00417480((void *)((int)this + 4),&param_1);
  *piVar2 = iVar1;
  if (*(char *)(*(int *)(iVar1 + 0x50) + 0x54) != '\0') {
    param_1 = *(int *)(iVar1 + 0x10);
    piVar2 = FUN_00417480(&DAT_004e21bc,&param_1);
    *piVar2 = iVar1;
  }
  return;
}

