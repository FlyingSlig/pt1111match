// FUNCTION: PORT1111 0x00499406
// name: __mbsrchr
// sig: uchar * __mbsrchr(uchar * _Str, uint _Ch)


/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  int *piVar4;
  uchar *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar8 = (byte *)0x0;
  p_Var3 = __getptd();
  piVar4 = p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_004e31f4) {
    piVar4 = FUN_0049ffd8();
  }
  if (piVar4[2] == 0) {
    puVar5 = (uchar *)_strrchr((char *)_Str,_Ch);
    return puVar5;
  }
  do {
    bVar7 = *_Str;
    if ((*(byte *)(bVar7 + 0x1d + (int)piVar4) & 4) == 0) {
      bVar9 = _Ch == bVar7;
LAB_00499461:
      pbVar6 = _Str;
      if (bVar9) {
        pbVar8 = _Str;
      }
    }
    else {
      pbVar6 = _Str + 1;
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        bVar9 = pbVar8 == (byte *)0x0;
        _Str = pbVar6;
        bVar7 = bVar1;
        goto LAB_00499461;
      }
      uVar2 = CONCAT11(bVar7,bVar1);
      bVar7 = bVar1;
      if (_Ch == uVar2) {
        pbVar8 = _Str;
      }
    }
    _Str = pbVar6 + 1;
    if (bVar7 == 0) {
      return pbVar8;
    }
  } while( true );
}

