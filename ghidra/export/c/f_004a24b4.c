// FUNCTION: PORT1111 0x004a24b4
// name: __control87
// sig: uint __control87(uint _NewValue, uint _Mask)


/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2003 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  __hw_cw();
  return uVar1 & ~_Mask | _NewValue & _Mask;
}

