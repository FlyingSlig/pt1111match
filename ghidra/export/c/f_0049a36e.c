// FUNCTION: PORT1111 0x0049a36e
// name: __ismbcdigit
// sig: int __ismbcdigit(uint _Ch)


/* Library Function - Single Match
    __ismbcdigit
   
   Library: Visual Studio 2003 Release */

int __cdecl __ismbcdigit(uint _Ch)

{
  uint uVar1;
  _ptiddata p_Var2;
  int *piVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 local_8;
  
  uVar1 = _Ch;
  if (_Ch < 0x100) {
    iVar4 = _isdigit(_Ch);
  }
  else {
    local_8 = 0;
    p_Var2 = __getptd();
    piVar3 = p_Var2->_tpxcptinfoptrs;
    if (piVar3 != DAT_004e31f4) {
      piVar3 = FUN_0049ffd8();
    }
    _Ch = CONCAT13((char)uVar1,CONCAT12((char)(uVar1 >> 8),(undefined2)_Ch));
    if ((((piVar3[2] != 0) &&
         (BVar5 = FUN_004a0ef9(1,(LPCSTR)((int)&_Ch + 2),2,(LPWORD)&local_8,piVar3[1],piVar3[3],1),
         BVar5 != 0)) && (local_8._2_2_ == 0)) && ((local_8 & 4) != 0)) {
      return 1;
    }
    iVar4 = 0;
  }
  return iVar4;
}

