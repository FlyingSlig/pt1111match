// FUNCTION: PORT1111 0x00499373
// name: __mbsnbcpy
// sig: uchar * __mbsnbcpy(uchar * _Dest, uchar * _Source, size_t _Count)


/* Library Function - Single Match
    __mbsnbcpy
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  _ptiddata p_Var4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  p_Var4 = __getptd();
  piVar5 = p_Var4->_tpxcptinfoptrs;
  if (piVar5 != DAT_004e31f4) {
    piVar5 = FUN_0049ffd8();
  }
  pbVar8 = _Dest;
  if (piVar5[2] == 0) {
    _Dest = (uchar *)_strncpy((char *)_Dest,(char *)_Source,_Count);
  }
  else {
    do {
      while( true ) {
        pbVar3 = pbVar8;
        if (_Count == 0) {
          return _Dest;
        }
        bVar1 = *_Source;
        uVar6 = _Count - 1;
        bVar2 = *(byte *)(bVar1 + 0x1d + (int)piVar5);
        *pbVar3 = bVar1;
        if ((bVar2 & 4) != 0) break;
        pbVar8 = pbVar3 + 1;
        _Source = _Source + 1;
        _Count = uVar6;
        if (bVar1 == 0) goto LAB_004993d8;
      }
      if (uVar6 == 0) {
        *pbVar3 = 0;
        return _Dest;
      }
      bVar1 = _Source[1];
      uVar6 = _Count - 2;
      pbVar3[1] = bVar1;
      pbVar8 = pbVar3 + 2;
      _Source = _Source + 2;
      _Count = uVar6;
    } while (bVar1 != 0);
    *pbVar3 = 0;
LAB_004993d8:
    if (uVar6 != 0) {
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar8 = 0;
        pbVar8 = pbVar8 + 1;
      }
    }
  }
  return _Dest;
}

