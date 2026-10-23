// FUNCTION: PORT1111 0x0049a2d6
// name: __strdup
// sig: char * __strdup(char * _Src)


/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2003 Release */

char * __cdecl __strdup(char *_Src)

{
  size_t sVar1;
  uint *puVar2;
  
  if (_Src != (char *)0x0) {
    sVar1 = _strlen(_Src);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_0049b7a0(puVar2,(uint *)_Src);
      return (char *)puVar2;
    }
  }
  return (char *)0x0;
}

