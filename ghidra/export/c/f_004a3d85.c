// FUNCTION: PORT1111 0x004a3d85
// name: ___addl
// sig: undefined4 ___addl(uint param_1, uint param_2, uint * param_3)


/* Library Function - Single Match
    ___addl
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

