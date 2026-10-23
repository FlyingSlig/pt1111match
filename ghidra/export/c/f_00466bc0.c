// FUNCTION: PORT1111 0x00466bc0
// name: FUN_00466bc0
// sig: int * FUN_00466bc0(void * this, uint param_1, uint param_2)


/* WARNING: Removing unreachable block (ram,0x00466c47) */

int * __thiscall FUN_00466bc0(void *this,uint param_1,uint param_2)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  uchar *_Memory;
  undefined *local_4;
  
  _Src = *(char **)this;
  pcVar2 = _Src;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_4 = PTR_DAT_004dd95c;
  if (((pcVar2 != _Src + 1) && (param_1 <= param_2)) &&
     (param_2 < (uint)((int)pcVar2 - (int)(_Src + 1)))) {
    _Memory = (uchar *)__strdup(_Src);
    _Memory[param_1] = '\0';
    FUN_00466160(&local_4,_Memory,0xffffffff);
    FUN_00466040(&local_4,(char *)(*(int *)this + 1 + param_2));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return this;
}

