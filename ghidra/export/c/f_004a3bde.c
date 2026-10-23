// FUNCTION: PORT1111 0x004a3bde
// name: siglookup
// sig: undefined siglookup(void)


/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Release */

void __cdecl siglookup(void)

{
  uint uVar1;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = in_EDX;
  do {
    if (*(int *)(uVar1 + 4) == unaff_ESI) {
      return;
    }
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < in_EDX + DAT_004de3c4 * 0xc);
  return;
}

