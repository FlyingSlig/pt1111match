// FUNCTION: PORT1111 0x00438de0
// name: FUN_00438de0
// sig: undefined FUN_00438de0(void * this, char * param_1, int param_2)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_00438de0(void *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7c98;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004016b0(local_2c,(undefined4 *)param_1,(int)pcVar3 - (int)(param_1 + 1));
  iVar2 = *(int *)((int)this + 0x34);
  local_4 = 0;
  piVar4 = (int *)FUN_0044d7e0((void *)((int)this + 0x30),&param_1,local_2c);
  if (*piVar4 == iVar2) {
    piVar4 = FUN_00438c30((void *)((int)this + 0x30),local_2c);
    *piVar4 = param_2;
  }
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return;
}

