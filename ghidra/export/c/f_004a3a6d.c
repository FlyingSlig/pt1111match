// FUNCTION: PORT1111 0x004a3a6d
// name: x_ismbbtype
// sig: undefined4 x_ismbbtype(byte param_1, uint param_2, byte param_3)


/* Library Function - Single Match
    _x_ismbbtype
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if (((&DAT_004e3201)[param_1] & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(PTR_DAT_004de480 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

