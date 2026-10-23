// FUNCTION: PORT1111 0x0049a3f2
// name: __msize
// sig: size_t __msize(void * _Memory)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2003 Release */

size_t __cdecl __msize(void *_Memory)

{
  uint uVar1;
  SIZE_T SVar2;
  size_t local_20;
  
  if (DAT_004e3568 == 3) {
    __lock(4);
    uVar1 = ___sbh_find_block((int)_Memory);
    if (uVar1 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_0049a45f();
    if (uVar1 != 0) {
      return local_20;
    }
  }
  SVar2 = HeapSize(DAT_004e3564,0,_Memory);
  return SVar2;
}

