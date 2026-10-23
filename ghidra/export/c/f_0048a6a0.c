// FUNCTION: PORT1111 0x0048a6a0
// name: FUN_0048a6a0
// sig: HFONT FUN_0048a6a0(LOGFONTA * param_1, int * param_2)


HFONT __cdecl FUN_0048a6a0(LOGFONTA *param_1,int *param_2)

{
  HFONT pHVar1;
  uint uVar2;
  LONG *pLVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  
  pHVar1 = CreateFontIndirectA(param_1);
  uVar4 = (uint)DAT_004e2ca8;
  uVar2 = 0;
  piVar5 = param_2;
  if (uVar4 != 0) {
    do {
      if (*piVar5 == 0) break;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 0x10;
    } while ((int)uVar2 < (int)uVar4);
  }
  uVar7 = DAT_004e2ca8;
  if (uVar2 == uVar4) {
    iVar6 = 0;
    piVar5 = param_2;
    if (uVar4 != 0) {
      do {
        if ((HGDIOBJ)*piVar5 != (HGDIOBJ)0x0) {
          DeleteObject((HGDIOBJ)*piVar5);
          uVar7 = DAT_004e2ca8;
          *piVar5 = 0;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0x10;
      } while (iVar6 < (int)(uint)uVar7);
    }
    uVar2 = 0;
  }
  if (uVar2 != uVar7) {
    pLVar3 = param_2 + uVar2 * 0x10;
    *pLVar3 = (LONG)pHVar1;
    for (iVar6 = 0xf; pLVar3 = pLVar3 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
      *pLVar3 = param_1->lfHeight;
      param_1 = (LOGFONTA *)&param_1->lfWidth;
    }
  }
  return pHVar1;
}

