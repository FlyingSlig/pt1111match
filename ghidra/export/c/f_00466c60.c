// FUNCTION: PORT1111 0x00466c60
// name: FUN_00466c60
// sig: undefined4 * FUN_00466c60(void * this, undefined4 * param_1, char * param_2)


undefined4 * __thiscall FUN_00466c60(void *this,undefined4 *param_1,char *param_2)

{
  uchar *_Memory;
  uchar *local_4;
  
  local_4 = PTR_DAT_004dd95c;
  FUN_00466160(&local_4,*(uchar **)this,0xffffffff);
  if (param_2 != (char *)0x0) {
    FUN_00466040(&local_4,param_2);
  }
  _Memory = local_4;
  *param_1 = PTR_DAT_004dd95c;
  FUN_00466160(param_1,local_4,0xffffffff);
  if ((_Memory != (uchar *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return param_1;
}

