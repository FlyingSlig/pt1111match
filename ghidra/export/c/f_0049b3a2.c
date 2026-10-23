// FUNCTION: PORT1111 0x0049b3a2
// name: __getptd
// sig: _ptiddata __getptd(void)


/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2003 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata p_Var1;
  int iVar2;
  DWORD DVar3;
  
  dwErrCode = GetLastError();
  p_Var1 = (_ptiddata)(*DAT_004e2d44)(DAT_004dddc4);
  if (p_Var1 == (_ptiddata)0x0) {
    p_Var1 = _calloc(1,0x8c);
    if (p_Var1 != (_ptiddata)0x0) {
      iVar2 = (*DAT_004e2d48)(DAT_004dddc4,p_Var1);
      if (iVar2 != 0) {
        p_Var1->_initaddr = &DAT_004de340;
        p_Var1->_holdrand = 1;
        DVar3 = GetCurrentThreadId();
        p_Var1->_thandle = 0xffffffff;
        p_Var1->_tid = DVar3;
        goto LAB_0049b407;
      }
    }
    __amsg_exit(0x10);
  }
LAB_0049b407:
  SetLastError(dwErrCode);
  return p_Var1;
}

