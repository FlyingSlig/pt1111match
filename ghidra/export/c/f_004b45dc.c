// FUNCTION: PORT1111 0x004b45dc
// name: __d_inttype
// sig: undefined4 __d_inttype(double param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __d_inttype(double param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = __fpclass(param_1);
  if ((uVar2 & 0x90) == 0) {
    fVar3 = __frnd(param_1);
    if ((double)fVar3 == param_1) {
      dVar1 = param_1 / _DAT_004cbfa8;
      fVar3 = __frnd(dVar1);
      if ((float10)dVar1 == fVar3) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

