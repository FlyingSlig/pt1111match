// FUNCTION: PORT1111 0x00498769
// name: __unlock_file2
// sig: void __unlock_file2(int _Index, void * _File)


/* Library Function - Single Match
    __unlock_file2
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_0049b936(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}

