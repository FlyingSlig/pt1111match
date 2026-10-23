// FUNCTION: PORT1111 0x004a4631
// name: __setmode_lk
// sig: int __setmode_lk(uint param_1, int param_2)


/* Library Function - Single Match
    __setmode_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmode_lk(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_004e3440 + ((int)param_1 >> 5);
  iVar4 = (param_1 & 0x1f) * 0x24;
  bVar2 = *(byte *)(*piVar3 + 4 + iVar4);
  if (param_2 == 0x8000) {
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      piVar3 = FUN_0049fc4d();
      *piVar3 = 0x16;
      return -1;
    }
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 | 0x80;
  }
  return (-(uint)((bVar2 & 0x80) != 0) & 0xffffc000) + 0x8000;
}

