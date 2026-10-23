// FUNCTION: PORT1111 0x004a24e6
// name: __controlfp
// sig: uint __controlfp(uint _NewValue, uint _Mask)


/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Release */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}

