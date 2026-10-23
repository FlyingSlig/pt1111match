// FUNCTION: PORT1111 0x00437290
// name: FUN_00437290
// sig: undefined4 FUN_00437290(void * this, undefined4 * param_1, undefined4 * param_2)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_00437290(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
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
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00465e00(param_1);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004016b0(local_2c,(undefined4 *)pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_4 = 0;
  puVar3 = (uint *)FUN_0044d7e0((void *)((int)this + 0x30),&param_1,local_2c);
  uVar4 = *puVar3;
  if (uVar4 == *(uint *)((int)this + 0x34)) {
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    *param_2 = *(undefined4 *)(uVar4 + 0x28);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    uVar4 = CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar4;
}

