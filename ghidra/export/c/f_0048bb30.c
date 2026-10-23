// FUNCTION: PORT1111 0x0048bb30
// name: FUN_0048bb30
// sig: undefined FUN_0048bb30(ulonglong * param_1, ulonglong * param_2, int * param_3, int param_4)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0048bb30(ulonglong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 uVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar4;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  short sVar18;
  short sVar19;
  ulonglong uVar17;
  ushort uVar20;
  short sVar22;
  short sVar23;
  ulonglong uVar21;
  ushort uVar24;
  short sVar26;
  short sVar27;
  ulonglong uVar25;
  short sVar28;
  
  do {
    iVar2 = *param_3;
    if (iVar2 != 0) {
      uVar14 = *param_1;
      if (iVar2 != -1) {
        uVar9 = (undefined1)((uint)iVar2 >> 0x18);
        uVar6 = (undefined1)((uint)iVar2 >> 0x10);
        uVar5 = (undefined1)((uint)iVar2 >> 8);
        uVar4 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar9,uVar9),uVar6),
                                                          CONCAT14(uVar6,iVar2)) >> 0x20),uVar5),
                                  uVar5),CONCAT11((char)iVar2,(char)iVar2)) & _DAT_004dda40;
        uVar16 = uVar14 & _DAT_004dda28;
        uVar15 = uVar14 & _DAT_004dda20;
        uVar14 = uVar14 & _DAT_004dda18;
        uVar1 = *param_2;
        uVar25 = uVar1 & _DAT_004dda28;
        uVar21 = (uVar1 & _DAT_004dda20) >> 5;
        uVar17 = (uVar1 & _DAT_004dda18) >> 0xb;
        uVar7 = (ushort)(uVar4 >> 0x10);
        uVar10 = (ushort)(uVar4 >> 0x20);
        uVar12 = (ushort)(uVar4 >> 0x30);
        sVar22 = (short)(uVar21 >> 0x10);
        sVar23 = (short)(uVar21 >> 0x20);
        uVar24 = (ushort)((uVar1 & _DAT_004dda20) >> 0x35);
        uVar3 = (ushort)uVar4 >> 3;
        uVar8 = uVar7 >> 3;
        uVar11 = uVar10 >> 3;
        uVar13 = uVar12 >> 3;
        sVar26 = (short)(uVar25 >> 0x10);
        sVar27 = (short)(uVar25 >> 0x20);
        sVar28 = (short)(uVar25 >> 0x30);
        sVar18 = (short)(uVar17 >> 0x10);
        sVar19 = (short)(uVar17 >> 0x20);
        uVar20 = (ushort)((uVar1 & _DAT_004dda18) >> 0x3b);
        uVar14 = (CONCAT26(((ushort)(((ushort)(uVar14 >> 0x3b) - uVar20) * uVar13) >> 5) + uVar20,
                           CONCAT24(((ushort)(((short)(uint)(uVar14 >> 0x2b) - sVar19) * uVar11) >>
                                    5) + sVar19,
                                    CONCAT22(((ushort)(((short)(uint6)(uVar14 >> 0x1b) - sVar18) *
                                                      uVar8) >> 5) + sVar18,
                                             ((ushort)(((short)(uVar14 >> 0xb) - (short)uVar17) *
                                                      uVar3) >> 5) + (short)uVar17))) &
                 _DAT_004dda28) << 0xb |
                 (CONCAT26(((ushort)(((ushort)(uVar15 >> 0x35) - uVar24) * (uVar12 >> 2)) >> 6) +
                           uVar24,CONCAT24(((ushort)(((short)(uint)(uVar15 >> 0x25) - sVar23) *
                                                    (uVar10 >> 2)) >> 6) + sVar23,
                                           CONCAT22(((ushort)(((short)(uint6)(uVar15 >> 0x15) -
                                                              sVar22) * (uVar7 >> 2)) >> 6) + sVar22
                                                    ,((ushort)(((short)(uVar15 >> 5) - (short)uVar21
                                                               ) * ((ushort)uVar4 >> 2)) >> 6) +
                                                     (short)uVar21))) & _DAT_004dda48) << 5 |
                 CONCAT26(((ushort)(((short)(uVar16 >> 0x30) - sVar28) * uVar13) >> 5) + sVar28,
                          CONCAT24(((ushort)(((short)(uVar16 >> 0x20) - sVar27) * uVar11) >> 5) +
                                   sVar27,CONCAT22(((ushort)(((short)(uVar16 >> 0x10) - sVar26) *
                                                            uVar8) >> 5) + sVar26,
                                                   ((ushort)(((short)uVar16 - (short)uVar25) * uVar3
                                                            ) >> 5) + (short)uVar25))) &
                 _DAT_004dda28;
      }
      *param_2 = uVar14;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}

