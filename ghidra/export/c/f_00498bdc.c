// FUNCTION: PORT1111 0x00498bdc
// name: _freopen
// sig: FILE * _freopen(char * _Filename, char * _Mode, FILE * _File)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _freopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _freopen(char *_Filename,char *_Mode,FILE *_File)

{
  FILE *pFVar1;
  
  __lock_file(_File);
  if ((_File->_flag & 0x83) != 0) {
    FUN_00498ad0(_File);
  }
  _File->_base = (char *)0x0;
  _File->_ptr = (char *)0x0;
  _File->_flag = 0;
  _File->_cnt = 0;
  pFVar1 = __openfile(_Filename,_Mode,0x40,_File);
  FUN_00498c38();
  return pFVar1;
}

