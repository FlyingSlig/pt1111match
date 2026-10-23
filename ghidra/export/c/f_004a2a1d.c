// FUNCTION: PORT1111 0x004a2a1d
// name: __umatherr
// sig: float10 __umatherr(int param_1, int param_2)


/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if ((&DAT_004de5c0)[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0x4de5c4);
      goto LAB_004a2a39;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_004a2a39:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_004a24fc();
    if (iVar1 == 0) {
      __set_errno(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}

