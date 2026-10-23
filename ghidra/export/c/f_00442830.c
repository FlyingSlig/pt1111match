// FUNCTION: PORT1111 0x00442830
// name: FUN_00442830
// sig: undefined FUN_00442830(void * this, int * param_1, int param_2)


void __thiscall FUN_00442830(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0x10];
  iVar2 = param_1[0x14];
  iVar3 = (**(code **)(*param_1 + 0x88))();
  FUN_004426d0(this,iVar2,iVar1,iVar3,param_2);
  return;
}

