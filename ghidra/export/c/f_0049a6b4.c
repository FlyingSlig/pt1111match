// FUNCTION: PORT1111 0x0049a6b4
// name: __callnewh
// sig: int __callnewh(size_t _Size)


/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_004e2d3c != (code *)0x0) {
    iVar1 = (*DAT_004e2d3c)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

