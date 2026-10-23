// FUNCTION: PORT1111 0x00498406
// name: ___crtExitProcess
// sig: void ___crtExitProcess(int param_1)


/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

