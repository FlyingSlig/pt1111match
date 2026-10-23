// FUNCTION: PORT1111 0x0049d1ea
// name: __heap_init
// sig: int __heap_init(void)


/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2003 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_004e3564 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_004e3564 == (HANDLE)0x0) {
    return 0;
  }
  DAT_004e3568 = ___heap_select();
  if ((DAT_004e3568 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_004e3564);
    return 0;
  }
  return 1;
}

