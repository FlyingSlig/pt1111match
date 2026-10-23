// FUNCTION: PORT1111 0x0049e851
// name: __read
// sig: int __read(int _FileHandle, void * _DstBuf, uint _MaxCharCount)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2003 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < DAT_004e3420) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_004e3440)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_004e3440)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_0049fc4d();
        *piVar1 = 9;
        puVar2 = FUN_0049fc56();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __read_lk(_FileHandle,_DstBuf,(char *)_MaxCharCount);
      }
      FUN_0049e8d8();
      return local_20;
    }
  }
  piVar1 = FUN_0049fc4d();
  *piVar1 = 9;
  puVar2 = FUN_0049fc56();
  *puVar2 = 0;
  return -1;
}

