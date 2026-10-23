// FUNCTION: PORT1111 0x0048fe60
// name: FUN_0048fe60
// sig: undefined FUN_0048fe60(undefined8 param_1, undefined8 param_2, undefined8 param_3, ulonglong * param_4, undefined4 param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0048fe60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
            undefined4 param_5)

{
  ulonglong uVar1;
  ushort uVar2;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar3;
  ushort uVar11;
  ushort uVar12;
  short sVar14;
  short sVar15;
  ulonglong uVar13;
  ushort uVar16;
  short sVar18;
  short sVar19;
  ulonglong uVar17;
  ushort uVar20;
  short sVar22;
  short sVar23;
  ulonglong uVar21;
  short sVar24;
  
  uVar8 = (undefined1)((uint)param_5 >> 0x18);
  uVar5 = (undefined1)((uint)param_5 >> 0x10);
  uVar4 = (undefined1)((uint)param_5 >> 8);
  uVar3 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar8,uVar8),uVar5),
                                                    CONCAT14(uVar5,param_5)) >> 0x20),uVar4),uVar4),
                   CONCAT11((char)param_5,(char)param_5)) & _DAT_004ddaa0;
  uVar1 = *param_4;
  uVar21 = uVar1 & _DAT_004dda88;
  uVar17 = (uVar1 & _DAT_004dda80) >> 5;
  uVar13 = (uVar1 & _DAT_004dda78) >> 0xb;
  uVar6 = (ushort)(uVar3 >> 0x10);
  uVar9 = (ushort)(uVar3 >> 0x20);
  uVar11 = (ushort)(uVar3 >> 0x30);
  sVar18 = (short)(uVar17 >> 0x10);
  sVar19 = (short)(uVar17 >> 0x20);
  uVar20 = (ushort)((uVar1 & _DAT_004dda80) >> 0x35);
  uVar2 = (ushort)uVar3 >> 3;
  uVar7 = uVar6 >> 3;
  uVar10 = uVar9 >> 3;
  uVar12 = uVar11 >> 3;
  sVar22 = (short)(uVar21 >> 0x10);
  sVar23 = (short)(uVar21 >> 0x20);
  sVar24 = (short)(uVar21 >> 0x30);
  sVar14 = (short)(uVar13 >> 0x10);
  sVar15 = (short)(uVar13 >> 0x20);
  uVar16 = (ushort)((uVar1 & _DAT_004dda78) >> 0x3b);
  *param_4 = (CONCAT26(((ushort)(((short)((ulonglong)param_1 >> 0x30) - uVar16) * uVar12) >> 5) +
                       uVar16,CONCAT24(((ushort)(((short)((ulonglong)param_1 >> 0x20) - sVar15) *
                                                uVar10) >> 5) + sVar15,
                                       CONCAT22(((ushort)(((short)((ulonglong)param_1 >> 0x10) -
                                                          sVar14) * uVar7) >> 5) + sVar14,
                                                ((ushort)(((short)param_1 - (short)uVar13) * uVar2)
                                                >> 5) + (short)uVar13))) & _DAT_004dda88) << 0xb |
             (CONCAT26(((ushort)(((short)((ulonglong)param_2 >> 0x30) - uVar20) * (uVar11 >> 2)) >>
                       6) + uVar20,
                       CONCAT24(((ushort)(((short)((ulonglong)param_2 >> 0x20) - sVar19) *
                                         (uVar9 >> 2)) >> 6) + sVar19,
                                CONCAT22(((ushort)(((short)((ulonglong)param_2 >> 0x10) - sVar18) *
                                                  (uVar6 >> 2)) >> 6) + sVar18,
                                         ((ushort)(((short)param_2 - (short)uVar17) *
                                                  ((ushort)uVar3 >> 2)) >> 6) + (short)uVar17))) &
             _DAT_004ddaa8) << 5 |
             CONCAT26(((ushort)(((short)((ulonglong)param_3 >> 0x30) - sVar24) * uVar12) >> 5) +
                      sVar24,CONCAT24(((ushort)(((short)((ulonglong)param_3 >> 0x20) - sVar23) *
                                               uVar10) >> 5) + sVar23,
                                      CONCAT22(((ushort)(((short)((ulonglong)param_3 >> 0x10) -
                                                         sVar22) * uVar7) >> 5) + sVar22,
                                               ((ushort)(((short)param_3 - (short)uVar21) * uVar2)
                                               >> 5) + (short)uVar21))) & _DAT_004dda88;
  return;
}

