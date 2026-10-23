// FUNCTION: PORT1111 0x004986e8
// name: __lock_file
// sig: void __lock_file(FILE * _File)


/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0x4ddb2f < _File) && (_File < (FILE *)0x4ddd91)) {
    __lock(((int)&_File[-0x26eda]._file >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

