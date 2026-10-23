// FUNCTION: PORT1111 0x00498b6d
// name: __fsopen
// sig: FILE * __fsopen(char * _Filename, char * _Mode, int _ShFlag)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = (FILE *)FUN_0049fcd2();
  if (pFVar1 == (FILE *)0x0) {
    piVar2 = FUN_0049fc4d();
    *piVar2 = 0x18;
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = __openfile(_Filename,_Mode,_ShFlag,pFVar1);
    FUN_00498bbf();
  }
  return pFVar1;
}

