// FUNCTION: PORT1111 0x004a168e
// name: __isatty
// sig: int __isatty(int _FileHandle)


/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

int __cdecl __isatty(int _FileHandle)

{
  if (DAT_004e3420 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)((&DAT_004e3440)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 0x40
  ;
}

