// FUNCTION: PORT1111 0x00457c40
// name: FUN_00457c40
// sig: void * FUN_00457c40(void * param_1, int param_2, void * param_3)


void * FUN_00457c40(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}

