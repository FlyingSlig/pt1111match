// FUNCTION: PORT1111 0x0049a233
// name: __mbsupr
// sig: uchar * __mbsupr(uchar * _String)


/* Library Function - Single Match
    __mbsupr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsupr(uchar *_String)

{
  byte bVar1;
  uchar *puVar2;
  _ptiddata p_Var3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  
  p_Var3 = __getptd();
  piVar4 = p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_004e31f4) {
    piVar4 = FUN_0049ffd8();
  }
  puVar2 = _String;
  bVar6 = *_String;
  pbVar7 = _String;
  do {
    if (bVar6 == 0) {
      return puVar2;
    }
    bVar6 = *pbVar7;
    bVar1 = *(byte *)((int)piVar4 + bVar6 + 0x1d);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 0x20) != 0) {
        bVar6 = *(byte *)((int)piVar4 + bVar6 + 0x11d);
      }
      *pbVar7 = bVar6;
    }
    else {
      uVar5 = FUN_0049c757(piVar4[3],0x200,(LPCSTR)pbVar7,2,(LPSTR)&_String,2,piVar4[1],1);
      if (uVar5 == 0) {
        return (uchar *)0x0;
      }
      *pbVar7 = (byte)_String;
      if (1 < (int)uVar5) {
        pbVar7 = pbVar7 + 1;
        *pbVar7 = (byte)((uint)_String >> 8);
      }
    }
    pbVar7 = pbVar7 + 1;
    bVar6 = *pbVar7;
  } while( true );
}

