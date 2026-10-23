// FUNCTION: PORT1111 0x004a0681
// name: __lseek
// sig: long __lseek(int _FileHandle, long _Offset, int _Origin)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2003 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD local_20;
  
  if ((uint)_FileHandle < DAT_004e3420) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_004e3440)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_004e3440)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_0049fc4d();
        *piVar1 = 9;
        puVar2 = FUN_0049fc56();
        *puVar2 = 0;
        local_20 = 0xffffffff;
      }
      else {
        local_20 = __lseek_lk(_FileHandle,_Offset,_Origin);
      }
      FUN_004a0708();
      return local_20;
    }
  }
  piVar1 = FUN_0049fc4d();
  *piVar1 = 9;
  puVar2 = FUN_0049fc56();
  *puVar2 = 0;
  return -1;
}

