// FUNCTION: PORT1111 0x0049fe23
// name: setSBCS
// sig: undefined setSBCS(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_004e3200;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_004e3304 = 0;
  DAT_004e31f8 = 0;
  DAT_004e31f0 = 0;
  _DAT_004e3310 = 0;
  DAT_004e3314 = 0;
  DAT_004e3318 = 0;
  return;
}

