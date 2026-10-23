// FUNCTION: PORT1111 0x0049d23b
// name: ___sbh_heap_init
// sig: undefined4 ___sbh_heap_init(undefined4 param_1)


/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_004e3550 = HeapAlloc(DAT_004e3564,0,0x140);
  if (DAT_004e3550 == (LPVOID)0x0) {
    return 0;
  }
  DAT_004e3548 = 0;
  DAT_004e354c = 0;
  DAT_004e3558 = DAT_004e3550;
  DAT_004e3554 = param_1;
  DAT_004e355c = 0x10;
  return 1;
}

