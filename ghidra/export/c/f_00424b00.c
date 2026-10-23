// FUNCTION: PORT1111 0x00424b00
// name: FUN_00424b00
// sig: undefined FUN_00424b00(uint param_1)


void FUN_00424b00(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar1 = DAT_004e1f2c;
  local_c = (&DAT_004d6450)[param_1 & 0xb7];
  if (0xc < local_c) {
    local_c = (&DAT_004d6450)[param_1 & 0x83];
  }
  local_8 = (&DAT_004d6450)[param_1 & 0x1f];
  if (0xc < local_8) {
    local_8 = (&DAT_004d6450)[param_1 & 0xe];
  }
  iVar5 = (&DAT_004d6450)[param_1 & 0x7b];
  if (0xc < iVar5) {
    iVar5 = (&DAT_004d6450)[param_1 & 0x38];
  }
  iVar4 = (&DAT_004d6450)[param_1 & 0xf1];
  if (0xc < iVar4) {
    iVar4 = (&DAT_004d6450)[param_1 & 0xe0];
  }
  (&DAT_004e0b28)[DAT_004e1f2c * 5] = 0xffffffff;
  (&DAT_004e0b2c)[iVar1 * 5] = 0xffffffff;
  (&DAT_004e0b30)[iVar1 * 5] = 0xffffffff;
  (&DAT_004e0b34)[iVar1 * 5] = 0xffffffff;
  iVar2 = 0;
  piVar3 = &DAT_004e0b28 + iVar1 * 5;
  do {
    if ((iVar2 != 4) &&
       ((((local_c == iVar2 || (iVar4 == iVar2)) || (local_8 == iVar2)) || (iVar5 == iVar2)))) {
      *piVar3 = iVar2;
      piVar3 = piVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  iVar5 = 0;
  if (0 < iVar1) {
    piVar3 = &DAT_004e0b2c;
    do {
      if (((&DAT_004e0b34)[iVar1 * 5] == piVar3[2]) &&
         ((&DAT_004e0b30)[iVar1 * 5] == piVar3[1] &&
          ((&DAT_004e0b2c)[iVar1 * 5] == *piVar3 && (&DAT_004e0b28)[iVar1 * 5] == piVar3[-1])))
      break;
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar5 < iVar1);
  }
  if (iVar5 == iVar1) {
    (&DAT_004d6450)[param_1] = DAT_004d6448;
    (&DAT_004e0b38)[iVar1 * 5] = DAT_004d6448;
    DAT_004e1f2c = iVar1 + 1;
    DAT_004d6448 = DAT_004d6448 + 1;
    return;
  }
  (&DAT_004d6450)[param_1] = (&DAT_004e0b38)[iVar5 * 5];
  return;
}

