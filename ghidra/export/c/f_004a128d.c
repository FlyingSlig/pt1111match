// FUNCTION: PORT1111 0x004a128d
// name: ___crtInitCritSecNoSpinCount@8
// sig: undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1)


/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2003 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}

