// FUNCTION: PORT1111 0x00429690
// name: FUN_00429690
// sig: undefined FUN_00429690(void * this, int * param_1, undefined4 * param_2)


void __thiscall FUN_00429690(void *this,int *param_1,undefined4 *param_2)

{
  void *local_4;
  
  local_4 = this;
  FUN_00429620(this,*param_1,param_1[1],(uint *)&param_1,(uint *)&local_4);
  *param_2 = param_1;
  param_2[1] = local_4;
  return;
}

