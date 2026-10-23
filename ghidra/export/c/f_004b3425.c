// FUNCTION: PORT1111 0x004b3425
// name: _strtod
// sig: double _strtod(char * _Str, char * * _EndPtr)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _strtod
   
   Library: Visual Studio 2003 Release */

double __cdecl _strtod(char *_Str,char **_EndPtr)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  _locale_t _Locale;
  FLT p_Var4;
  int *piVar5;
  byte *_Str_00;
  _flt local_24;
  double local_c;
  
  bVar1 = *_Str;
  _Str_00 = (byte *)_Str;
  while (iVar3 = _isspace((uint)bVar1), iVar3 != 0) {
    _Str_00 = _Str_00 + 1;
    bVar1 = *_Str_00;
  }
  _Locale = (_locale_t)_strlen((char *)_Str_00);
  p_Var4 = __fltin2(&local_24,(char *)_Str_00,_Locale);
  if (_EndPtr != (char **)0x0) {
    *_EndPtr = (char *)(_Str_00 + p_Var4->nbytes);
  }
  uVar2 = p_Var4->flags;
  if ((uVar2 & 0x240) == 0) {
    if ((uVar2 & 0x81) == 0) {
      if ((uVar2 & 0x100) == 0) {
        return p_Var4->dval;
      }
      local_c = 0.0;
    }
    else {
      local_c = _DAT_004e06f0;
      if (*_Str_00 == 0x2d) {
        local_c = -_DAT_004e06f0;
      }
    }
    piVar5 = FUN_0049fc4d();
    *piVar5 = 0x22;
  }
  else {
    local_c = 0.0;
    if (_EndPtr != (char **)0x0) {
      *_EndPtr = _Str;
    }
  }
  return local_c;
}

