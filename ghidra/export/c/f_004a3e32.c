// FUNCTION: PORT1111 0x004a3e32
// name: ___shr_12
// sig: undefined ___shr_12(uint * param_1)


/* Library Function - Single Match
    ___shr_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

