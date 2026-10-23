// FUNCTION: PORT1111 0x0048a630
// name: FUN_0048a630
// sig: undefined4 FUN_0048a630(int * param_1, int param_2)


undefined4 __cdecl FUN_0048a630(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 0;
  if (DAT_004e2ca8 != 0) {
    piVar2 = (int *)(param_2 + 4);
    do {
      if (piVar2[-1] == 0) {
        return 0;
      }
      iVar1 = __mbscmp((uchar *)(piVar2 + 7),(uchar *)(param_1 + 7));
      if (iVar1 == 0) {
        iVar1 = 7;
        bVar6 = true;
        piVar4 = piVar2;
        piVar5 = param_1;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return *(undefined4 *)(param_2 + iVar3 * 0x40);
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x10;
    } while (iVar3 < (int)(uint)DAT_004e2ca8);
  }
  return 0;
}

