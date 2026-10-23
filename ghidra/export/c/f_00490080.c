// FUNCTION: PORT1111 0x00490080
// name: FUN_00490080
// sig: undefined4 FUN_00490080(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, ulonglong * param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_00490080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            ulonglong *param_5)

{
  ulonglong uVar1;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  undefined1 uVar7;
  short sVar8;
  undefined8 uVar2;
  short sVar9;
  undefined8 uVar3;
  short sVar11;
  short sVar12;
  ulonglong uVar10;
  ushort uVar13;
  short sVar15;
  short sVar16;
  ulonglong uVar14;
  ushort uVar17;
  short sVar19;
  short sVar20;
  ulonglong uVar18;
  short sVar21;
  
  uVar7 = (undefined1)((uint)param_4 >> 0x18);
  uVar5 = (undefined1)((uint)param_4 >> 0x10);
  uVar4 = (undefined1)((uint)param_4 >> 8);
  uVar1 = *param_5;
  uVar18 = uVar1 & _DAT_004dda88;
  uVar14 = (uVar1 & _DAT_004dda80) >> 5;
  uVar10 = (uVar1 & _DAT_004dda78) >> 0xb;
  uVar2 = psllw(CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar7,uVar7),uVar5),
                                                          CONCAT14(uVar5,param_4)) >> 0x20),uVar4),
                                  uVar4),CONCAT11((char)param_4,(char)param_4)) & _DAT_004dda70,1);
  sVar19 = (short)(uVar18 >> 0x10);
  sVar20 = (short)(uVar18 >> 0x20);
  sVar21 = (short)(uVar18 >> 0x30);
  sVar6 = (short)((ulonglong)uVar2 >> 0x10);
  sVar8 = (short)((ulonglong)uVar2 >> 0x20);
  sVar9 = (short)((ulonglong)uVar2 >> 0x30);
  sVar11 = (short)(uVar10 >> 0x10);
  sVar12 = (short)(uVar10 >> 0x20);
  uVar13 = (ushort)((uVar1 & _DAT_004dda78) >> 0x3b);
  uVar3 = psllw(uVar2,1);
  sVar15 = (short)(uVar14 >> 0x10);
  sVar16 = (short)(uVar14 >> 0x20);
  uVar17 = (ushort)((uVar1 & _DAT_004dda80) >> 0x35);
  *param_5 = (CONCAT26(((ushort)(((short)((ulonglong)param_1 >> 0x30) - uVar13) * sVar9) >> 5) +
                       uVar13,CONCAT24(((ushort)(((short)((ulonglong)param_1 >> 0x20) - sVar12) *
                                                sVar8) >> 5) + sVar12,
                                       CONCAT22(((ushort)(((short)((ulonglong)param_1 >> 0x10) -
                                                          sVar11) * sVar6) >> 5) + sVar11,
                                                ((ushort)(((short)param_1 - (short)uVar10) *
                                                         (short)uVar2) >> 5) + (short)uVar10))) &
             _DAT_004dda88) << 0xb |
             (CONCAT26(((ushort)(((short)((ulonglong)param_2 >> 0x30) - uVar17) *
                                (short)((ulonglong)uVar3 >> 0x30)) >> 6) + uVar17,
                       CONCAT24(((ushort)(((short)((ulonglong)param_2 >> 0x20) - sVar16) *
                                         (short)((ulonglong)uVar3 >> 0x20)) >> 6) + sVar16,
                                CONCAT22(((ushort)(((short)((ulonglong)param_2 >> 0x10) - sVar15) *
                                                  (short)((ulonglong)uVar3 >> 0x10)) >> 6) + sVar15,
                                         ((ushort)(((short)param_2 - (short)uVar14) * (short)uVar3)
                                         >> 6) + (short)uVar14))) & _DAT_004ddaa8) << 5 |
             CONCAT26(((ushort)(((short)((ulonglong)param_3 >> 0x30) - sVar21) * sVar9) >> 5) +
                      sVar21,CONCAT24(((ushort)(((short)((ulonglong)param_3 >> 0x20) - sVar20) *
                                               sVar8) >> 5) + sVar20,
                                      CONCAT22(((ushort)(((short)((ulonglong)param_3 >> 0x10) -
                                                         sVar19) * sVar6) >> 5) + sVar19,
                                               ((ushort)(((short)param_3 - (short)uVar18) *
                                                        (short)uVar2) >> 5) + (short)uVar18))) &
             _DAT_004dda88;
  return 0;
}

