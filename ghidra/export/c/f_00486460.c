// FUNCTION: PORT1111 0x00486460
// name: FUN_00486460
// sig: void * FUN_00486460(void * this, uchar * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall FUN_00486460(void *this,uchar *param_1)

{
  uchar uVar1;
  void *pvVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined1 local_34 [4];
  uchar local_30 [32];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba838;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  if (*(int *)((int)this + 4) == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    ExceptionList = &local_c;
    FUN_00466af0(&param_1,param_1,0xffffffff);
    local_4 = 0;
    FUN_00465e70(&param_1,'\\');
    puVar3 = (uchar *)FUN_00465e00(&param_1);
    puVar4 = local_30;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (uVar1 != '\0');
    __mbslwr(local_30);
    pvVar2 = _bsearch(local_34,*(void **)((int)this + 8),*(int *)((int)this + 0xc) - 1,0x22,
                      (_PtFuncCompare *)&LAB_00486440);
    local_4 = 0xffffffff;
    FUN_00465e40(&param_1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

