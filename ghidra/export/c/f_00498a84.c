// FUNCTION: PORT1111 0x00498a84
// name: _fwrite
// sig: size_t _fwrite(void * _Str, size_t _Size, size_t _Count, FILE * _File)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __fwrite_lk(_Str,_Size,_Count,_File);
  FUN_00498ac6();
  return uVar1;
}

