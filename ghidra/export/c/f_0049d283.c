// FUNCTION: PORT1111 0x0049d283
// name: ___sbh_find_block
// sig: uint ___sbh_find_block(int param_1)


/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_004e3550;
  while( true ) {
    if (DAT_004e3550 + DAT_004e354c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

