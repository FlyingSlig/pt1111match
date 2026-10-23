// FUNCTION: PORT1111 0x00498460
// name: __cinit
// sig: int __cinit(int param_1)


/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (PTR___fpmath_004ddb18 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_004ddb18)(param_1);
  }
  iVar1 = 0;
  puVar2 = &DAT_004d5098;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_004d50b0);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_0049e206);
    puVar2 = &DAT_004d5000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_004d5094);
    iVar1 = 0;
  }
  return iVar1;
}

