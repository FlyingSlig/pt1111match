// FUNCTION: PORT1111 0x0049873a
// name: __unlock_file
// sig: void __unlock_file(FILE * _File)


/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x4ddb2f < _File) && (_File < (FILE *)0x4ddd91)) {
    FUN_0049b936(((int)&_File[-0x26eda]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

