// FUNCTION: PORT1111 0x00427690
// name: FUN_00427690
// sig: undefined FUN_00427690(int param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_00427690(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  cVar1 = *(char *)(param_1 + 0x3e);
  if ((*(ushort *)(param_1 + 0x3c) & DAT_004e2050) == DAT_004e2060) {
    *(undefined1 *)(param_1 + 0x3e) = 0xee;
    bVar12 = cVar1 == -0x12;
  }
  else {
    uVar2 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e) - 1,
                         (int)*(short *)(param_1 + 0x4c) - 1);
    uVar3 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e),
                         (int)*(short *)(param_1 + 0x4c) - 1);
    uVar4 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e) + 1,
                         (int)*(short *)(param_1 + 0x4c) - 1);
    uVar5 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e) + 1,
                         (int)*(short *)(param_1 + 0x4c));
    uVar6 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e) + 1,
                         (int)*(short *)(param_1 + 0x4c) + 1);
    uVar7 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e),
                         (int)*(short *)(param_1 + 0x4c) + 1);
    uVar8 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e) - 1,
                         (int)*(short *)(param_1 + 0x4c) + 1);
    uVar9 = FUN_00429c20(DAT_004e2404,(int)*(short *)(param_1 + 0x4e) - 1,
                         (int)*(short *)(param_1 + 0x4c));
    iVar10 = 0;
    iVar11 = 0;
    if (('\x01' < (char)uVar2) && (iVar10 = 1, '\x02' < (char)uVar2)) {
      iVar11 = 1;
    }
    if (('\x01' < (char)uVar3) && (iVar10 = iVar10 + 2, '\x02' < (char)uVar3)) {
      iVar11 = iVar11 + 2;
    }
    if (('\x01' < (char)uVar4) && (iVar10 = iVar10 + 4, '\x02' < (char)uVar4)) {
      iVar11 = iVar11 + 4;
    }
    if (('\x01' < (char)uVar5) && (iVar10 = iVar10 + 8, '\x02' < (char)uVar5)) {
      iVar11 = iVar11 + 8;
    }
    if (('\x01' < (char)uVar6) && (iVar10 = iVar10 + 0x10, '\x02' < (char)uVar6)) {
      iVar11 = iVar11 + 0x10;
    }
    if (('\x01' < (char)uVar7) && (iVar10 = iVar10 + 0x20, '\x02' < (char)uVar7)) {
      iVar11 = iVar11 + 0x20;
    }
    if (('\x01' < (char)uVar8) && (iVar10 = iVar10 + 0x40, '\x02' < (char)uVar8)) {
      iVar11 = iVar11 + 0x40;
    }
    if (('\x01' < (char)uVar9) && (iVar10 = iVar10 + 0x80, '\x02' < (char)uVar9)) {
      iVar11 = iVar11 + 0x80;
    }
    if ((*(ushort *)(param_1 + 0x3c) & DAT_004e2050) == DAT_004e2058) {
      *(undefined1 *)(param_1 + 0x3e) = (&DAT_004d6910)[iVar10];
    }
    else {
      *(undefined1 *)(param_1 + 0x3e) = 0xf;
    }
    *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) | (&DAT_004e1f38)[iVar11];
    bVar12 = cVar1 == *(char *)(param_1 + 0x3e);
  }
  if ((!bVar12) && (DAT_004e2681 != '\0')) {
    FUN_00427480(param_1);
  }
  return;
}

