// FUNCTION: PORT1111 0x0048ba60
// name: FUN_0048ba60
// sig: undefined FUN_0048ba60(undefined8 param_1, undefined8 param_2, undefined8 param_3, ulonglong * param_4, int * param_5, int param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0048ba60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
            int *param_5,int param_6)

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
  ulonglong in_MM1;
  short sVar15;
  short sVar16;
  ulonglong uVar14;
  ushort uVar17;
  short sVar19;
  short sVar20;
  ulonglong uVar18;
  ushort uVar21;
  short sVar23;
  short sVar24;
  ulonglong uVar22;
  short sVar25;
  
  do {
    iVar2 = *param_5;
    if (iVar2 != 0) {
      if (iVar2 != -1) {
        uVar9 = (undefined1)((uint)iVar2 >> 0x18);
        uVar6 = (undefined1)((uint)iVar2 >> 0x10);
        uVar5 = (undefined1)((uint)iVar2 >> 8);
        uVar4 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar9,uVar9),uVar6),
                                                          CONCAT14(uVar6,iVar2)) >> 0x20),uVar5),
                                  uVar5),CONCAT11((char)iVar2,(char)iVar2)) & _DAT_004dda40;
        uVar1 = *param_4;
        uVar22 = uVar1 & _DAT_004dda28;
        uVar18 = (uVar1 & _DAT_004dda20) >> 5;
        uVar14 = (uVar1 & _DAT_004dda18) >> 0xb;
        uVar7 = (ushort)(uVar4 >> 0x10);
        uVar10 = (ushort)(uVar4 >> 0x20);
        uVar12 = (ushort)(uVar4 >> 0x30);
        sVar19 = (short)(uVar18 >> 0x10);
        sVar20 = (short)(uVar18 >> 0x20);
        uVar21 = (ushort)((uVar1 & _DAT_004dda20) >> 0x35);
        uVar3 = (ushort)uVar4 >> 3;
        uVar8 = uVar7 >> 3;
        uVar11 = uVar10 >> 3;
        uVar13 = uVar12 >> 3;
        sVar23 = (short)(uVar22 >> 0x10);
        sVar24 = (short)(uVar22 >> 0x20);
        sVar25 = (short)(uVar22 >> 0x30);
        sVar15 = (short)(uVar14 >> 0x10);
        sVar16 = (short)(uVar14 >> 0x20);
        uVar17 = (ushort)((uVar1 & _DAT_004dda18) >> 0x3b);
        in_MM1 = (CONCAT26(((ushort)(((short)((ulonglong)param_1 >> 0x30) - uVar17) * uVar13) >> 5)
                           + uVar17,CONCAT24(((ushort)(((short)((ulonglong)param_1 >> 0x20) - sVar16
                                                       ) * uVar11) >> 5) + sVar16,
                                             CONCAT22(((ushort)(((short)((ulonglong)param_1 >> 0x10)
                                                                - sVar15) * uVar8) >> 5) + sVar15,
                                                      ((ushort)(((short)param_1 - (short)uVar14) *
                                                               uVar3) >> 5) + (short)uVar14))) &
                 _DAT_004dda28) << 0xb |
                 (CONCAT26(((ushort)(((short)((ulonglong)param_2 >> 0x30) - uVar21) * (uVar12 >> 2))
                           >> 6) + uVar21,
                           CONCAT24(((ushort)(((short)((ulonglong)param_2 >> 0x20) - sVar20) *
                                             (uVar10 >> 2)) >> 6) + sVar20,
                                    CONCAT22(((ushort)(((short)((ulonglong)param_2 >> 0x10) - sVar19
                                                       ) * (uVar7 >> 2)) >> 6) + sVar19,
                                             ((ushort)(((short)param_2 - (short)uVar18) *
                                                      ((ushort)uVar4 >> 2)) >> 6) + (short)uVar18)))
                 & _DAT_004dda48) << 5 |
                 CONCAT26(((ushort)(((short)((ulonglong)param_3 >> 0x30) - sVar25) * uVar13) >> 5) +
                          sVar25,CONCAT24(((ushort)(((short)((ulonglong)param_3 >> 0x20) - sVar24) *
                                                   uVar11) >> 5) + sVar24,
                                          CONCAT22(((ushort)(((short)((ulonglong)param_3 >> 0x10) -
                                                             sVar23) * uVar8) >> 5) + sVar23,
                                                   ((ushort)(((short)param_3 - (short)uVar22) *
                                                            uVar3) >> 5) + (short)uVar22))) &
                 _DAT_004dda28;
      }
      *param_4 = in_MM1;
    }
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    param_6 = param_6 + -1;
  } while (param_6 != 0);
  return;
}

