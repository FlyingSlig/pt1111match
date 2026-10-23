// FUNCTION: PORT1111 0x004a2ea4
// name: __get_osfhandle
// sig: intptr_t __get_osfhandle(int _FileHandle)


/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2003 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_004e3420) &&
     (piVar1 = (intptr_t *)((&DAT_004e3440)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  piVar2 = FUN_0049fc4d();
  *piVar2 = 9;
  puVar3 = FUN_0049fc56();
  *puVar3 = 0;
  return -1;
}

