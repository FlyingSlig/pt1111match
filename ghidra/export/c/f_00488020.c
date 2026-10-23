// FUNCTION: PORT1111 0x00488020
// name: FUN_00488020
// sig: undefined FUN_00488020(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulonglong * param_5, int param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00488020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulonglong *param_5,int param_6)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar10;
  short sVar11;
  ulonglong uVar9;
  ushort uVar12;
  short sVar14;
  short sVar15;
  ulonglong uVar13;
  ushort uVar16;
  short sVar18;
  short sVar19;
  ulonglong uVar17;
  short sVar20;
  
  do {
    uVar1 = *param_5;
    uVar17 = uVar1 & _DAT_004dd9c0;
    uVar13 = (uVar1 & _DAT_004dd9b8) >> 5;
    uVar9 = (uVar1 & _DAT_004dd9b0) >> 0xb;
    uVar3 = (ushort)((ulonglong)param_4 >> 0x10);
    uVar5 = (ushort)((ulonglong)param_4 >> 0x20);
    uVar7 = (ushort)((ulonglong)param_4 >> 0x30);
    sVar14 = (short)(uVar13 >> 0x10);
    sVar15 = (short)(uVar13 >> 0x20);
    uVar16 = (ushort)((uVar1 & _DAT_004dd9b8) >> 0x35);
    uVar2 = (ushort)param_4 >> 3;
    uVar4 = uVar3 >> 3;
    uVar6 = uVar5 >> 3;
    uVar8 = uVar7 >> 3;
    sVar18 = (short)(uVar17 >> 0x10);
    sVar19 = (short)(uVar17 >> 0x20);
    sVar20 = (short)(uVar17 >> 0x30);
    sVar10 = (short)(uVar9 >> 0x10);
    sVar11 = (short)(uVar9 >> 0x20);
    uVar12 = (ushort)((uVar1 & _DAT_004dd9b0) >> 0x3b);
    *param_5 = (CONCAT26(((ushort)(((short)((ulonglong)param_1 >> 0x30) - uVar12) * uVar8) >> 5) +
                         uVar12,CONCAT24(((ushort)(((short)((ulonglong)param_1 >> 0x20) - sVar11) *
                                                  uVar6) >> 5) + sVar11,
                                         CONCAT22(((ushort)(((short)((ulonglong)param_1 >> 0x10) -
                                                            sVar10) * uVar4) >> 5) + sVar10,
                                                  ((ushort)(((short)param_1 - (short)uVar9) * uVar2)
                                                  >> 5) + (short)uVar9))) & _DAT_004dd9c0) << 0xb |
               (CONCAT26(((ushort)(((short)((ulonglong)param_2 >> 0x30) - uVar16) * (uVar7 >> 2)) >>
                         6) + uVar16,
                         CONCAT24(((ushort)(((short)((ulonglong)param_2 >> 0x20) - sVar15) *
                                           (uVar5 >> 2)) >> 6) + sVar15,
                                  CONCAT22(((ushort)(((short)((ulonglong)param_2 >> 0x10) - sVar14)
                                                    * (uVar3 >> 2)) >> 6) + sVar14,
                                           ((ushort)(((short)param_2 - (short)uVar13) *
                                                    ((ushort)param_4 >> 2)) >> 6) + (short)uVar13)))
               & _DAT_004dd9e0) << 5 |
               CONCAT26(((ushort)(((short)((ulonglong)param_3 >> 0x30) - sVar20) * uVar8) >> 5) +
                        sVar20,CONCAT24(((ushort)(((short)((ulonglong)param_3 >> 0x20) - sVar19) *
                                                 uVar6) >> 5) + sVar19,
                                        CONCAT22(((ushort)(((short)((ulonglong)param_3 >> 0x10) -
                                                           sVar18) * uVar4) >> 5) + sVar18,
                                                 ((ushort)(((short)param_3 - (short)uVar17) * uVar2)
                                                 >> 5) + (short)uVar17))) & _DAT_004dd9c0;
    param_5 = param_5 + 1;
    param_6 = param_6 + -1;
  } while (param_6 != 0);
  return;
}

