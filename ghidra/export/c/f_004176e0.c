// FUNCTION: PORT1111 0x004176e0
// name: FUN_004176e0
// sig: undefined FUN_004176e0(void * this, int param_1)


void __thiscall FUN_004176e0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  param_1 = CONCAT22(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4),*(undefined2 *)(param_1 + 0x34));
  piVar2 = FUN_00417480((void *)((int)this + 0x28),&param_1);
  *piVar2 = iVar1;
  return;
}

