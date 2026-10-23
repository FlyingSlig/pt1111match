// FUNCTION: PORT1111 0x0049bc08
// name: ___security_init_cookie
// sig: void ___security_init_cookie(void)


/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2003 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  if ((DAT_004ddb0c == 0) || (DAT_004ddb0c == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_004ddb0c = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                   local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_004ddb0c == 0) {
      DAT_004ddb0c = 0xbb40e64e;
    }
  }
  return;
}

