// FUNCTION: PORT1111 0x00497d67
// name: __fpmath
// sig: void __fpmath(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2003 Release */

void __cdecl __fpmath(int param_1)

{
  FUN_00497d2f();
  _DAT_004e2ce0 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}

