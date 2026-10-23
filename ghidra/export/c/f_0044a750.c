// FUNCTION: PORT1111 0x0044a750
// name: FUN_0044a750
// sig: undefined FUN_0044a750(void * this, int param_1)


void __thiscall FUN_0044a750(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  if (iVar1 == DAT_004e27f4) {
    iVar1 = *(int *)this;
    uVar2 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
    (**(code **)(iVar1 + 4))(uVar2);
    return;
  }
  if (iVar1 == DAT_004e27f8) {
    piVar3 = (int *)((int)this + 0x30);
  }
  else if (iVar1 == DAT_004e27fc) {
    piVar3 = (int *)((int)this + 0x60);
  }
  else {
    if (*(int *)((int)this + 0xc0) == 0) {
      return;
    }
    piVar3 = (int *)((int)this + 0x90);
  }
  iVar1 = *piVar3;
  uVar2 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
  (**(code **)(iVar1 + 4))(uVar2);
  return;
}

