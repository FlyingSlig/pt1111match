// FUNCTION: PORT1111 0x004a2abb
// name: __handle_qnan1
// sig: float10 __handle_qnan1(int param_1, double param_2)


/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_004de5bc == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = FUN_0049fc4d();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}

