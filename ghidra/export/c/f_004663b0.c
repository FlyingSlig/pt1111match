// FUNCTION: PORT1111 0x004663b0
// name: FUN_004663b0
// sig: bool FUN_004663b0(void * this, uchar * param_1)


bool __thiscall FUN_004663b0(void *this,uchar *param_1)

{
  uchar uVar1;
  uchar *_Str;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  _Str = *(uchar **)this;
  puVar2 = _Str;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != '\0');
  if ((puVar2 != _Str + 1) && (param_1 != (uchar *)0x0)) {
    puVar2 = param_1;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (uVar1 != '\0');
    if (puVar2 != param_1 + 1) {
      puVar2 = param_1;
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (uVar1 != '\0');
      puVar3 = _Str;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
      } while (uVar1 != '\0');
      puVar4 = __mbsstr(_Str,param_1);
      return (bool)('\x01' - (puVar4 !=
                             puVar3 + ((*(int *)this - ((int)puVar2 - (int)(param_1 + 1))) -
                                      (int)(_Str + 1))));
    }
  }
  return false;
}

