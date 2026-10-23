// FUNCTION: PORT1111 0x004173c0
// name: FUN_004173c0
// sig: undefined FUN_004173c0(void * this, int * param_1)


void __thiscall FUN_004173c0(void *this,int *param_1)

{
  int *piVar1;
  int *local_8;
  int *local_4;
  
  piVar1 = param_1;
  FUN_00453a00(*(void **)((int)this + 0x21c),param_1);
  param_1 = (int *)piVar1[4];
  FUN_00417030((void *)((int)this + 4),(int *)&param_1);
  param_1 = (int *)piVar1[4];
  FUN_00413b10(&DAT_004e21bc,(int *)&local_8,(int *)&param_1);
  FUN_004169d0(&DAT_004e21bc,&param_1,local_8,local_4);
  return;
}

