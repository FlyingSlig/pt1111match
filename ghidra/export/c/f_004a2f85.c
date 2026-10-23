// FUNCTION: PORT1111 0x004a2f85
// name: __unlock_fhandle
// sig: void __unlock_fhandle(int _Filehandle)


/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_004e3440)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}

