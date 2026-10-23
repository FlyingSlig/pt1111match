// FUNCTION: PORT1111 0x00457c70
// name: FUN_00457c70
// sig: undefined FUN_00457c70(void * this, int param_1, int param_2)


void __thiscall FUN_00457c70(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = *(undefined4 *)(iVar1 + param_1 * 4);
  *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(param_2 * 4 + iVar1);
  *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = uVar2;
  return;
}

