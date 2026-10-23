// FUNCTION: PORT1111 0x00498036
// name: _malloc
// sig: void * _malloc(size_t _Size)


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_004e2ebc);
  return pvVar1;
}

