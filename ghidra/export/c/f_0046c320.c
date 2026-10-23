// FUNCTION: PORT1111 0x0046c320
// name: FUN_0046c320
// sig: int * FUN_0046c320(void * this, int * param_1)


int * __thiscall FUN_0046c320(void *this,int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 4) == 2) {
    return (int *)0x0;
  }
  piVar3 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
  iVar1 = *piVar3;
  uVar2 = (**(code **)(*(int *)this + 0xc))(param_1[2] - *param_1,param_1[3] - param_1[1]);
  (**(code **)(iVar1 + 0x54))(uVar2);
  (**(code **)(*(int *)this + 0x44))(piVar3,0,0,0,param_1);
  iVar1 = *piVar3;
  uVar4 = (**(code **)(*(int *)this + 0x1c))();
  uVar4 = (**(code **)(*(int *)this + 0x18))(uVar4);
  (**(code **)(iVar1 + 0x78))(uVar4);
  return piVar3;
}

