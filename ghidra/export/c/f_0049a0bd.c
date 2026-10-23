// FUNCTION: PORT1111 0x0049a0bd
// name: __mbsnbcmp
// sig: int __mbsnbcmp(uchar * _Str1, uchar * _Str2, size_t _MaxCount)


/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  size_t sVar1;
  byte bVar2;
  _ptiddata p_Var3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  p_Var3 = __getptd();
  piVar5 = p_Var3->_tpxcptinfoptrs;
  if (_MaxCount == 0) {
    iVar4 = 0;
  }
  else {
    if (piVar5 != DAT_004e31f4) {
      piVar5 = FUN_0049ffd8();
    }
    if (piVar5[2] != 0) {
      do {
        uVar7 = (ushort)*_Str1;
        sVar1 = _MaxCount - 1;
        pbVar9 = _Str1 + 1;
        if ((*(byte *)(uVar7 + 0x1d + (int)piVar5) & 4) == 0) {
LAB_0049a147:
          uVar6 = (uint)*_Str2;
          pbVar8 = _Str2 + 1;
          if ((*(byte *)(uVar6 + 0x1d + (int)piVar5) & 4) != 0) {
            if (sVar1 != 0) {
              bVar2 = *pbVar8;
              sVar1 = _MaxCount - 2;
              if (bVar2 != 0) {
                pbVar8 = _Str2 + 2;
                uVar6 = (uint)CONCAT11(*_Str2,bVar2);
                goto LAB_0049a173;
              }
            }
            _MaxCount = sVar1;
            uVar6 = 0;
            sVar1 = _MaxCount;
          }
        }
        else {
          if (sVar1 != 0) {
            bVar2 = *pbVar9;
            if (bVar2 == 0) {
              uVar7 = 0;
            }
            else {
              pbVar9 = _Str1 + 2;
              uVar7 = CONCAT11(*_Str1,bVar2);
            }
            goto LAB_0049a147;
          }
          uVar6 = (uint)*_Str2;
          uVar7 = 0;
          pbVar8 = _Str2;
          if ((*(byte *)(uVar6 + 0x1d + (int)piVar5) & 4) != 0) {
            return 0;
          }
        }
LAB_0049a173:
        _MaxCount = sVar1;
        if ((ushort)uVar6 != uVar7) {
          return (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
        }
        if (uVar7 == 0) {
          return 0;
        }
        _Str2 = pbVar8;
        _Str1 = pbVar9;
        if (_MaxCount == 0) {
          return 0;
        }
      } while( true );
    }
    iVar4 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
  }
  return iVar4;
}

