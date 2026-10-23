// FUNCTION: PORT1111 0x004a0b6c
// name: __setargv
// sig: int __setargv(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2003 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  if (DAT_004e4590 == 0) {
    ___initmbctable();
  }
  DAT_004e2fd4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_004e2ed0,0x104);
  _DAT_004e2d18 = &DAT_004e2ed0;
  parse_cmdline((undefined4 *)0x0,&local_8);
  puVar1 = _malloc(in_ECX + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    parse_cmdline(puVar1,&local_8);
    _DAT_004e2cfc = local_8 + -1;
    iVar2 = 0;
    _DAT_004e2d00 = puVar1;
  }
  return iVar2;
}

