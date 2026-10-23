// FUNCTION: PORT1111 0x00466d80
// name: FUN_00466d80
// sig: undefined4 * FUN_00466d80(void * this, undefined4 * param_1, uint param_2, uint param_3)


undefined4 * __thiscall FUN_00466d80(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uchar *_Memory;
  char *pcVar3;
  uchar *local_4;
  
  pcVar2 = *(char **)this;
  local_4 = PTR_DAT_004dd95c;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (((pcVar3 != pcVar2 + 1) && (param_2 < param_3)) &&
     (param_3 <= (uint)((int)pcVar3 - (int)(pcVar2 + 1)))) {
    FUN_00466160(&local_4,(uchar *)(pcVar2 + param_2),0xffffffff);
    FUN_00465d40(&local_4,(param_3 - param_2) + 1);
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

