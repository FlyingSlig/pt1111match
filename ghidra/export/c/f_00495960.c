// FUNCTION: PORT1111 0x00495960
// name: FUN_00495960
// sig: int FUN_00495960(void * this, uint * param_1)


int __thiscall FUN_00495960(void *this,uint *param_1)

{
  int *local_8;
  int *local_4;
  
  FUN_00495370(this,(int *)&local_8,param_1);
  param_1 = (uint *)0x0;
  FUN_00474ae0((int)local_8,(int)local_4,(int *)&param_1);
  FUN_004958a0(this,&local_8,local_8,local_4);
  return (int)param_1;
}

