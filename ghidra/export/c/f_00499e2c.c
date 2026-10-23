// FUNCTION: PORT1111 0x00499e2c
// name: __mbsstr
// sig: uchar * __mbsstr(uchar * _Str, uchar * _Substr)


/* Library Function - Single Match
    __mbsstr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr)

{
  byte bVar1;
  _ptiddata p_Var2;
  int *piVar3;
  uint *puVar4;
  size_t sVar5;
  size_t sVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  p_Var2 = __getptd();
  piVar3 = p_Var2->_tpxcptinfoptrs;
  if (piVar3 != DAT_004e31f4) {
    piVar3 = FUN_0049ffd8();
  }
  if (piVar3[2] == 0) {
    puVar4 = FUN_004a0d90((uint *)_Str,(char *)_Substr);
    return (uchar *)puVar4;
  }
  if (*_Substr == '\0') {
    return _Str;
  }
  sVar5 = _strlen((char *)_Substr);
  sVar6 = _strlen((char *)_Str);
  if (*_Str != '\0') {
    iVar8 = (int)_Str - (int)_Substr;
    pbVar10 = _Str;
    do {
      if (_Str + (sVar6 - sVar5) < pbVar10) {
        return (uchar *)0x0;
      }
      puVar7 = _Substr;
      bVar1 = *pbVar10;
      while (bVar1 != 0) {
        if (*puVar7 == '\0') {
          return pbVar10;
        }
        if (puVar7[iVar8] != *puVar7) break;
        puVar7 = puVar7 + 1;
        bVar1 = puVar7[iVar8];
      }
      if (*puVar7 == '\0') {
        return pbVar10;
      }
      pbVar11 = pbVar10 + 1;
      iVar9 = iVar8 + 1;
      if ((*(byte *)(*pbVar10 + 0x1d + (int)piVar3) & 4) != 0) {
        if (*pbVar11 == 0) {
          return (uchar *)0x0;
        }
        pbVar11 = pbVar10 + 2;
        iVar9 = iVar8 + 2;
      }
      iVar8 = iVar9;
      pbVar10 = pbVar11;
    } while (*pbVar11 != 0);
  }
  return (uchar *)0x0;
}

