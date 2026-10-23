// FUNCTION: PORT1111 0x0048a410
// name: FUN_0048a410
// sig: undefined FUN_0048a410(HDC param_1, int param_2, int param_3, LPCSTR param_4, UINT param_5, int param_6, int param_7, int param_8)


void __cdecl
FUN_0048a410(HDC param_1,int param_2,int param_3,LPCSTR param_4,UINT param_5,int param_6,int param_7
            ,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UINT c;
  int iVar5;
  UINT UVar6;
  tagSIZE local_8;
  
  iVar1 = (int)param_4 - param_6;
  iVar3 = 0;
  if (0 < (int)param_5) {
    do {
      iVar4 = param_8 + -1;
      if (iVar4 < 0) {
LAB_0048a461:
        SetTextColor(param_1,DAT_004e2ca4);
        ExtTextOutA(param_1,param_2,param_3,0,(RECT *)0x0,param_4,param_5,(INT *)0x0);
        return;
      }
      piVar2 = (int *)(iVar4 * 0x10 + 8 + param_7);
      while ((iVar3 + iVar1 < piVar2[-1] || (*piVar2 < iVar3 + iVar1))) {
        iVar4 = iVar4 + -1;
        piVar2 = piVar2 + -4;
        if (iVar4 < 0) goto LAB_0048a461;
      }
      DAT_004e2ca4 = *(COLORREF *)(iVar4 * 0x10 + param_7);
      SetTextColor(param_1,DAT_004e2ca4);
      iVar5 = *(int *)(iVar4 * 0x10 + param_7 + 8);
      iVar4 = iVar4 + 1;
      if (iVar4 < param_8) {
        piVar2 = (int *)(iVar4 * 0x10 + 4 + param_7);
        do {
          if (iVar1 + iVar3 <= *piVar2) {
            iVar5 = *(int *)(iVar4 * 0x10 + 4 + param_7);
            break;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 4;
        } while (iVar4 < param_8);
      }
      UVar6 = (iVar5 - iVar3) - iVar1;
      c = param_5 - iVar3;
      if ((int)UVar6 < (int)(param_5 - iVar3)) {
        c = UVar6;
      }
      ExtTextOutA(param_1,param_2,param_3,0,(RECT *)0x0,param_4 + iVar3,c,(INT *)0x0);
      GetTextExtentPoint32A(param_1,param_4 + iVar3,c,&local_8);
      param_2 = param_2 + local_8.cx;
      iVar3 = iVar3 + c;
    } while (iVar3 < (int)param_5);
  }
  return;
}

