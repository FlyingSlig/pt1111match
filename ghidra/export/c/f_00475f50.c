// FUNCTION: PORT1111 0x00475f50
// name: FUN_00475f50
// sig: int FUN_00475f50(void * this, int * param_1)


int __thiscall FUN_00475f50(void *this,int *param_1)

{
  int *local_8;
  int *local_4;
  
  FUN_00413b10(this,(int *)&local_8,param_1);
  param_1 = (int *)0x0;
  FUN_00474ae0((int)local_8,(int)local_4,(int *)&param_1);
  FUN_004759e0(this,&local_8,local_8,local_4);
  return (int)param_1;
}

