// FUNCTION: PORT1111 0x0041c970
// name: FUN_0041c970
// sig: undefined4 FUN_0041c970(undefined4 * param_1, undefined4 * param_2, size_t * param_3)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0041c970(undefined4 *param_1,undefined4 *param_2,size_t *param_3)

{
  int iVar1;
  void *_Memory;
  uint uVar2;
  int local_154 [7];
  size_t local_138;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  iVar1 = FUN_0044f610((int)param_1,"Campanha.txt",2);
  if (iVar1 == 0) {
    iVar1 = FUN_0044f510(param_1,local_154,(int)local_104,0x100,0,0,0,0);
    if (iVar1 == 0) {
      _Memory = _malloc(local_138);
      if (_Memory == (void *)0x0) {
        return 0;
      }
      iVar1 = FUN_00450180(param_1);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      uVar2 = FUN_0044f970((int)param_1,(int)_Memory,local_138);
      if (uVar2 != 0) {
        *param_2 = _Memory;
        *param_3 = local_138;
        FUN_0044fbf0((int)param_1);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return 0;
}

