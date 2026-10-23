// FUNCTION: PORT1111 0x00467020
// name: FUN_00467020
// sig: undefined4 * FUN_00467020(undefined4 * param_1, uchar * param_2, char * param_3)


undefined4 * __cdecl FUN_00467020(undefined4 *param_1,uchar *param_2,char *param_3)

{
  uchar *_Memory;
  uchar *local_4;
  
  local_4 = PTR_DAT_004dd95c;
  FUN_00466160(&local_4,param_2,0xffffffff);
  FUN_00466040(&local_4,param_3);
  _Memory = local_4;
  *param_1 = PTR_DAT_004dd95c;
  FUN_00466160(param_1,local_4,0xffffffff);
  if ((_Memory != (uchar *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((param_3 != (char *)0x0) && (param_3 != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  return param_1;
}

