// FUNCTION: PORT1111 0x0043f7c0
// name: FUN_0043f7c0
// sig: int FUN_0043f7c0(void * this, int * param_1)


int __thiscall FUN_0043f7c0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  piVar2 = FUN_0043f590(this,param_1,5,(uint)(*(int *)(iVar1 + 0x34) == DAT_004e26fc));
  if (piVar2 != (int *)0x0) {
    return piVar2[4];
  }
  return -1;
}

