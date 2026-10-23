// FUNCTION: PORT1111 0x0049b589
// name: __mtinit
// sig: int __mtinit(void)


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinit(void)

{
  int iVar1;
  HMODULE hModule;
  DWORD *pDVar2;
  DWORD DVar3;
  
  iVar1 = __mtinitlocks();
  if (iVar1 == 0) {
    __mtterm();
    return 0;
  }
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004e2d40 = GetProcAddress(hModule,"FlsAlloc");
    DAT_004e2d44 = GetProcAddress(hModule,"FlsGetValue");
    DAT_004e2d48 = GetProcAddress(hModule,"FlsSetValue");
    DAT_004e2d4c = GetProcAddress(hModule,"FlsFree");
    if (DAT_004e2d44 == (FARPROC)0x0) {
      DAT_004e2d44 = TlsGetValue_exref;
      DAT_004e2d48 = TlsSetValue_exref;
      DAT_004e2d40 = FUN_0049b369;
      DAT_004e2d4c = TlsFree_exref;
    }
  }
  DAT_004dddc4 = (*DAT_004e2d40)(FUN_0049b413);
  if (((DAT_004dddc4 != -1) && (pDVar2 = _calloc(1,0x8c), pDVar2 != (DWORD *)0x0)) &&
     (iVar1 = (*DAT_004e2d48)(DAT_004dddc4,pDVar2), iVar1 != 0)) {
    pDVar2[0x15] = (DWORD)&DAT_004de340;
    pDVar2[5] = 1;
    DVar3 = GetCurrentThreadId();
    pDVar2[1] = 0xffffffff;
    *pDVar2 = DVar3;
    return 1;
  }
  __mtterm();
  return 0;
}

