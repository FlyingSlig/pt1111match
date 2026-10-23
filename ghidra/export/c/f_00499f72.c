// FUNCTION: PORT1111 0x00499f72
// name: __mbsicmp
// sig: int __mbsicmp(uchar * _Str1, uchar * _Str2)


/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  ushort uVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  undefined4 local_8;
  
  p_Var3 = __getptd();
  piVar4 = p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_004e31f4) {
    piVar4 = FUN_0049ffd8();
  }
  if (piVar4[2] == 0) {
    iVar5 = __stricmp((char *)_Str1,(char *)_Str2);
  }
  else {
    do {
      uVar1 = (ushort)*_Str1;
      puVar7 = _Str1 + 1;
      if ((*(byte *)(uVar1 + 0x1d + (int)piVar4) & 4) == 0) {
        _Str1 = puVar7;
        if ((*(byte *)((int)piVar4 + uVar1 + 0x1d) & 0x10) != 0) {
          uVar1 = (ushort)*(char *)((int)piVar4 + uVar1 + 0x11d);
        }
      }
      else if (*puVar7 == '\0') {
        uVar1 = 0;
        _Str1 = puVar7;
      }
      else {
        uVar6 = FUN_0049c757(piVar4[3],0x200,(LPCSTR)_Str1,2,(LPSTR)&local_8,2,piVar4[1],1);
        if (uVar6 == 1) {
          uVar1 = (ushort)local_8 & 0xff;
        }
        else {
          if (uVar6 != 2) {
            return 0x7fffffff;
          }
          uVar1 = (ushort)local_8 * 0x100 + ((ushort)((uint)local_8 >> 8) & 0xff);
        }
        _Str1 = _Str1 + 2;
      }
      uVar2 = (ushort)*_Str2;
      puVar7 = _Str2 + 1;
      if ((*(byte *)(uVar2 + 0x1d + (int)piVar4) & 4) == 0) {
        _Str2 = puVar7;
        if ((*(byte *)((int)piVar4 + uVar2 + 0x1d) & 0x10) != 0) {
          uVar2 = (ushort)*(char *)((int)piVar4 + uVar2 + 0x11d);
        }
      }
      else if (*puVar7 == '\0') {
        uVar2 = 0;
        _Str2 = puVar7;
      }
      else {
        uVar6 = FUN_0049c757(piVar4[3],0x200,(LPCSTR)_Str2,2,(LPSTR)&local_8,2,piVar4[1],1);
        if (uVar6 == 1) {
          uVar2 = (ushort)local_8 & 0xff;
        }
        else {
          if (uVar6 != 2) {
            return 0x7fffffff;
          }
          uVar2 = (ushort)local_8 * 0x100 + ((ushort)((uint)local_8 >> 8) & 0xff);
        }
        _Str2 = _Str2 + 2;
      }
      if (uVar2 != uVar1) {
        return (-(uint)(uVar2 < uVar1) & 2) - 1;
      }
    } while (uVar1 != 0);
    iVar5 = 0;
  }
  return iVar5;
}

