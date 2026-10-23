// FUNCTION: PORT1111 0x0049975c
// name: _fseek
// sig: int _fseek(FILE * _File, long _Offset, int _Origin)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2003 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
  __lock_file(_File);
  iVar1 = __fseek_lk(_File,_Offset,_Origin);
  FUN_0049979b();
  return iVar1;
}

