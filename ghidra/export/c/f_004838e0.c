// FUNCTION: PORT1111 0x004838e0
// name: FUN_004838e0
// sig: int FUN_004838e0(void * this, int * param_1)


int __thiscall FUN_004838e0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_4;
  
  piVar2 = param_1;
  local_4 = this;
  piVar1 = FUN_004825d0(this,param_1);
  piVar2 = FUN_00482520(this,piVar2);
  param_1 = (int *)0x0;
  FUN_004826c0((int)piVar2,(int)piVar1,(int *)&param_1);
  FUN_00483760(this,&local_4,piVar2,piVar1);
  return (int)param_1;
}

