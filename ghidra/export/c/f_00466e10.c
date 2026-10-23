// FUNCTION: PORT1111 0x00466e10
// name: FUN_00466e10
// sig: undefined4 * FUN_00466e10(void * this, undefined4 * param_1, uint param_2)


undefined4 * __thiscall FUN_00466e10(void *this,undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  uchar uVar3;
  uchar *_Memory;
  char *pcVar4;
  uchar *puVar5;
  uchar *local_4;
  
  local_4 = PTR_DAT_004dd95c;
  FUN_00466160(&local_4,*(uchar **)this,0xffffffff);
  _Memory = local_4;
  pcVar4 = *(char **)this;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (param_2 <= (uint)((int)pcVar4 - (int)pcVar1)) {
    puVar5 = local_4;
    do {
      uVar3 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (uVar3 != '\0');
    if (param_2 < (uint)((int)puVar5 - (int)(local_4 + 1))) {
      local_4[param_2] = '\0';
    }
  }
  *param_1 = PTR_DAT_004dd95c;
  FUN_00466160(param_1,local_4,0xffffffff);
  if ((_Memory != (uchar *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return param_1;
}

