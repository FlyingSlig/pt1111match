// FUNCTION: PORT1111 0x0046d9b0
// name: FUN_0046d9b0
// sig: undefined4 FUN_0046d9b0(void * this, int param_1, int * param_2)


undefined4 __thiscall FUN_0046d9b0(void *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 4))();
    iVar3 = (**(code **)(*(int *)this + 4))();
    if (iVar3 != iVar2) {
      return 0;
    }
    iVar2 = (**(code **)(*param_2 + 8))();
    iVar3 = (**(code **)(*(int *)this + 8))();
    if (iVar3 != iVar2) {
      return 0;
    }
    cVar1 = (**(code **)(*param_2 + 0xc))();
    if (cVar1 != '\b') {
      return 0;
    }
  }
  iVar2 = FUN_0046d6b0(param_1,(uint)(param_2 != (int *)0x0));
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 1;
  }
  uVar4 = FUN_0046d6b0(param_1,0);
  return uVar4;
}

