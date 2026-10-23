// FUNCTION: PORT1111 0x004a1f5c
// name: __IsZeroMan
// sig: undefined4 __IsZeroMan(int param_1)


/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

