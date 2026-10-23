// FUNCTION: PORT1111 0x00475ef0
// name: FUN_00475ef0
// sig: int FUN_00475ef0(void * this, int * param_1)


int __thiscall FUN_00475ef0(void *this,int *param_1)

{
  int *local_8;
  int *local_4;
  
  FUN_00413b10(this,(int *)&local_8,param_1);
  param_1 = (int *)0x0;
  FUN_00474ae0((int)local_8,(int)local_4,(int *)&param_1);
  FUN_004758e0(this,&local_8,local_8,local_4);
  return (int)param_1;
}

