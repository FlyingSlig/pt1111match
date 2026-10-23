// FUNCTION: PORT1111 0x00476680
// name: FUN_00476680
// sig: int FUN_00476680(void * this, int param_1)


int __thiscall FUN_00476680(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_4;
  
  iVar1 = param_1;
  local_4 = this;
  piVar2 = FUN_004749f0(this,param_1);
  piVar3 = FUN_00474930(this,iVar1);
  param_1 = 0;
  FUN_00474aa0((int)piVar3,(int)piVar2,&param_1);
  FUN_00475fb0(this,&local_4,piVar3,piVar2);
  return param_1;
}

