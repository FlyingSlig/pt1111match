// FUNCTION: PORT1111 0x004a3a18
// name: __sopen
// sig: int __sopen(char * _Filename, int _OpenFlag, int _ShareFlag, ...)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __sopen
   
   Library: Visual Studio 2003 Release */

int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  uint uVar1;
  byte in_stack_00000010;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x4a3a24;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)_ShareFlag,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_00000010
                     );
  local_8 = 0xffffffff;
  FUN_004a3a5d();
  return uVar1;
}

