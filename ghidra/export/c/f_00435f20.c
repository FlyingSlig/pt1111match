// FUNCTION: PORT1111 0x00435f20
// name: FUN_00435f20
// sig: int FUN_00435f20(void)


int FUN_00435f20(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  size_t _Count;
  int iVar12;
  undefined1 *puVar13;
  
  puVar4 = DAT_004e21e0;
  iVar5 = DAT_004e21dc;
  puVar11 = *(undefined1 **)(DAT_004e21dc + 4);
  if (puVar11 + (int)DAT_004e21d0 + 1 < DAT_004e21e0) {
    iVar5 = FUN_00435c10();
    return iVar5;
  }
  if (*(int *)(DAT_004e21dc + 0x20) == 0) {
    return ((int)DAT_004e21e0 - (int)DAT_004e31dc != 1) + 1;
  }
  puVar10 = DAT_004e21e0 + (-1 - (int)DAT_004e31dc);
  puVar8 = puVar10;
  puVar13 = DAT_004e31dc;
  if (0 < (int)puVar10) {
    do {
      *puVar11 = *puVar13;
      puVar11 = puVar11 + 1;
      puVar8 = puVar8 + -1;
      puVar13 = puVar13 + 1;
    } while (puVar8 != (undefined1 *)0x0);
  }
  if (*(int *)(iVar5 + 0x24) == 2) {
    sVar6 = 0;
    DAT_004e21d0 = (undefined1 *)0x0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  else {
    iVar12 = *(int *)(iVar5 + 0xc) - (int)puVar10;
    while (_Count = iVar12 - 1, (int)_Count < 1) {
      piVar2 = *(int **)(iVar5 + 4);
      piVar1 = (int *)(iVar5 + 4);
      if (*(int *)(iVar5 + 0x14) == 0) {
        *piVar1 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar5 + 0xc);
        iVar12 = uVar3 * 2;
        if (iVar12 < 1) {
          iVar12 = (uVar3 >> 3) + uVar3;
        }
        *(int *)(iVar5 + 0xc) = iVar12;
        piVar7 = FUN_00498201(piVar2,(uint *)(iVar12 + 2));
        iVar5 = DAT_004e21dc;
        *piVar1 = (int)piVar7;
      }
      if (*piVar1 == 0) {
        iVar5 = FUN_00435c10();
        return iVar5;
      }
      DAT_004e21e0 = puVar4 + (*piVar1 - (int)piVar2);
      puVar4 = DAT_004e21e0;
      iVar12 = *(int *)(iVar5 + 0xc) - (int)puVar10;
    }
    if (0x2000 < (int)_Count) {
      _Count = 0x2000;
    }
    if (*(int *)(iVar5 + 0x18) == 0) {
      sVar6 = _fread(puVar10 + *(int *)(iVar5 + 4),1,_Count,DAT_004e21e8);
      iVar5 = DAT_004e21dc;
      if ((sVar6 == 0) && ((DAT_004e21e8->_flag & 0x20) != 0)) {
        DAT_004e21d0 = (undefined1 *)sVar6;
        iVar5 = FUN_00435c10();
        return iVar5;
      }
    }
    else {
      sVar6 = 0;
      if (0 < (int)_Count) {
        do {
          iVar12 = FID_conflict__getc(DAT_004e21e8);
          iVar5 = DAT_004e21dc;
          if (iVar12 == -1) break;
          if (iVar12 == 10) goto LAB_00436051;
          iVar9 = *(int *)(DAT_004e21dc + 4) + sVar6;
          sVar6 = sVar6 + 1;
          puVar10[iVar9] = (char)iVar12;
        } while ((int)sVar6 < (int)_Count);
        if (iVar12 == 10) {
LAB_00436051:
          puVar10[*(int *)(iVar5 + 4) + sVar6] = (char)iVar12;
          sVar6 = sVar6 + 1;
        }
        if ((iVar12 == -1) && ((DAT_004e21e8->_flag & 0x20) != 0)) {
          iVar5 = FUN_00435c10();
          return iVar5;
        }
      }
    }
    DAT_004e21d0 = (undefined1 *)sVar6;
    *(size_t *)(iVar5 + 0x10) = sVar6;
    if (sVar6 != 0) {
      iVar12 = 0;
      goto LAB_004360fc;
    }
  }
  if (puVar10 == (undefined1 *)0x0) {
    iVar12 = 1;
    FUN_00435e80((int)DAT_004e21e8);
    sVar6 = (size_t)DAT_004e21d0;
    iVar5 = DAT_004e21dc;
  }
  else {
    iVar12 = 2;
    *(undefined4 *)(iVar5 + 0x24) = 2;
  }
LAB_004360fc:
  DAT_004e21d0 = puVar10 + sVar6;
  DAT_004e21d0[*(int *)(iVar5 + 4)] = 0;
  DAT_004e21d0[*(int *)(iVar5 + 4) + 1] = 0;
  DAT_004e31dc = (undefined1 *)*(undefined4 *)(iVar5 + 4);
  return iVar12;
}

