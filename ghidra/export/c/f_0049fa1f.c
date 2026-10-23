// FUNCTION: PORT1111 0x0049fa1f
// name: __close
// sig: int __close(int _FileHandle)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2003 Release */

int __cdecl __close(int _FileHandle)

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
        local_20 = -1;
      }
      else {
        local_20 = __close_lk(_FileHandle);
      }
      FUN_0049fa96();
      return local_20;
    }
  }
  piVar1 = FUN_0049fc4d();
  *piVar1 = 9;
  puVar2 = FUN_0049fc56();
  *puVar2 = 0;
  return -1;
}

