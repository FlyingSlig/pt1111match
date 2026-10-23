// FUNCTION: PORT1111 0x0049b9eb
// name: __lock
// sig: void __lock(int _File)


/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_004dddd0)[_File * 2] == 0) {
    iVar1 = FUN_0049b94b(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_004dddd0)[_File * 2]);
  return;
}

