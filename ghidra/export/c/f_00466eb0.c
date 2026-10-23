// FUNCTION: PORT1111 0x00466eb0
// name: FUN_00466eb0
// sig: undefined4 FUN_00466eb0(int * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00466eb0(int *param_1)

{
  uchar *_Memory;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uchar *local_430;
  void *local_42c;
  char local_428 [1036];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  _Memory = PTR_DAT_004dd95c;
  puStack_10 = &LAB_004b97cb;
  local_14 = ExceptionList;
  local_1c = DAT_004ddb0c;
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_430 = PTR_DAT_004dd95c;
    pcVar3 = local_428;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = '\0';
    local_c = 0;
    ExceptionList = &local_14;
    iVar2 = (**(code **)(*param_1 + 8))(local_428,0x400);
    while (iVar2 != 0) {
      FUN_00466040(&local_430,local_428);
      pcVar3 = local_428;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = '\0';
        pcVar3[3] = '\0';
        pcVar3 = pcVar3 + 4;
      }
      *pcVar3 = '\0';
      iVar2 = (**(code **)(*param_1 + 8))(local_428,0x400);
      _Memory = local_430;
    }
    FUN_00466160(local_42c,_Memory,0xffffffff);
    if ((_Memory != (uchar *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    uVar1 = 1;
  }
  ExceptionList = local_14;
  return uVar1;
}

