// FUNCTION: PORT1111 0x00498b1c
// name: _fclose
// sig: int _fclose(FILE * _File)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Release */

int __cdecl _fclose(FILE *_File)

{
  int local_20;
  
  local_20 = -1;
  if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = FUN_00498ad0(_File);
    FUN_00498b65();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}

