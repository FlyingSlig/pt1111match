// FUNCTION: PORT1111 0x00434500
// name: FUN_00434500
// sig: undefined FUN_00434500(void * this, undefined4 * param_1, undefined4 param_2)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_00434500(void *this,undefined4 *param_1,undefined4 param_2)

{
  char local_68 [100];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  if (DAT_004e21b8 == 0) {
    if (((*(int *)(DAT_004e240c + 0x60) == 2) && (param_1[3] != 9)) && (param_1[3] != 0x13)) {
      param_1[4] = param_2;
      FUN_00433980(param_1,local_68);
      FUN_00445740(*(void **)(DAT_004e240c + 100),local_68,100);
      return;
    }
    FUN_00434490((void *)((int)this + 0x170),param_1,param_2);
  }
  else if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
    return;
  }
  return;
}

