// FUNCTION: PORT1111 0x0046af90
// name: FUN_0046af90
// sig: int FUN_0046af90(void * this, int param_1, int param_2, int param_3)


int __thiscall FUN_0046af90(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 0x24))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)this + 0xc))();
    iVar1 = (**(code **)(*(int *)this + 0x14))();
    return iVar1 * param_3 + ((uVar2 & 0xff) >> 3) * param_2 + param_1;
  }
  iVar1 = (**(code **)(*(int *)this + 8))();
  iVar3 = (**(code **)(*(int *)this + 0x14))();
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  return ((uVar2 & 0xff) >> 3) * param_2 + ((iVar1 - param_3) + -1) * iVar3 + param_1;
}

