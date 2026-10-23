// FUNCTION: PORT1111 0x00467350
// name: FUN_00467350
// sig: bool FUN_00467350(int param_1)


bool __fastcall FUN_00467350(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *lpBits;
  UINT iUsage;
  BITMAPINFO *lpbmi;
  int DestWidth;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  HDC unaff_EBX;
  int iVar8;
  int unaff_ESI;
  uint unaff_EDI;
  int xSrc;
  int ySrc;
  undefined4 *puVar9;
  DWORD rop;
  int *piVar10;
  int *piVar11;
  undefined4 auStack_48c [4];
  undefined4 local_47c [15];
  byte bStack_440;
  int iStack_438;
  int iStack_430;
  undefined4 uStack_408;
  int iStack_4;
  
  puVar9 = local_47c;
  for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar11 = *(int **)(param_1 + 0x2c);
  local_47c[0] = 0x7c;
  uVar3 = (**(code **)(*piVar11 + 0x58))(piVar11);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  if ((iStack_430 == 8) && (cVar2 = (**(code **)(**(int **)(iStack_4 + 4) + 0xc))(), cVar2 == '\b'))
  {
    iVar6 = (**(code **)(**(int **)(iStack_4 + 4) + 0x28))();
    if (*(int *)(iVar6 + 0x20) == 0) {
      iVar6 = (**(code **)(**(int **)(iStack_4 + 4) + 0x28))();
      iVar6 = 1 << (*(byte *)(iVar6 + 0xe) & 0x1f);
    }
    else {
      iVar6 = (**(code **)(**(int **)(iStack_4 + 4) + 0x28))();
      iVar6 = *(int *)(iVar6 + 0x20);
    }
    iVar8 = 0;
    if (0 < iVar6) {
      do {
        iVar4 = (**(code **)(**(int **)(iStack_4 + 4) + 0x18))();
        (&uStack_408)[iVar8] = *(undefined4 *)(iVar4 + iVar8 * 4);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    iVar8 = 0;
    if (0 < iVar6) {
      do {
        uVar1 = *(undefined1 *)(&uStack_408 + iVar8);
        *(undefined1 *)(&uStack_408 + iVar8) = *(undefined1 *)((int)&uStack_408 + iVar8 * 4 + 2);
        *(undefined1 *)((int)&uStack_408 + iVar8 * 4 + 2) = uVar1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    piVar10 = (int *)&stack0xfffffb6c;
    (**(code **)(*DAT_004e2c1c + 0x14))(DAT_004e2c1c,4,&uStack_408,piVar10,0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x7c))(*(int **)(param_1 + 0x2c),piVar11);
    (**(code **)(*piVar10 + 8))(piVar10);
  }
  lpBits = (void *)(**(code **)(**(int **)(iStack_4 + 4) + 0x30))();
  iUsage = (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(*(int **)(param_1 + 0x2c),auStack_48c);
  *(UINT *)(param_1 + 0x28) = iUsage;
  if (iUsage == 0) {
    rop = 0xcc0020;
    lpbmi = (BITMAPINFO *)(**(code **)(**(int **)(iStack_4 + 4) + 0x28))();
    iVar6 = FUN_0047e870(iStack_4);
    iVar8 = FUN_0047e810(iStack_4);
    ySrc = 0;
    xSrc = 0;
    iVar4 = FUN_0047e870(iStack_4);
    DestWidth = FUN_0047e810(iStack_4);
    StretchDIBits(unaff_EBX,0,0,DestWidth,iVar4,xSrc,ySrc,iVar8,iVar6,lpBits,lpbmi,iUsage,rop);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x68))(*(int **)(param_1 + 0x2c),unaff_EBX);
  }
  (**(code **)(**(int **)(iStack_4 + 4) + 0x34))();
  if (-1 < *(int *)(param_1 + 0x28)) {
    if (((*(int *)(iStack_4 + 8) == 0) || ((bStack_440 & 0x40) == 0)) || (iStack_438 != 0x20)) {
      return true;
    }
    iVar6 = 0x21;
    puVar9 = auStack_48c;
    for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iVar4 = 0;
    auStack_48c[0] = 0x7c;
    iVar8 = (**(code **)(**(int **)(param_1 + 0x2c) + 100))
                      (*(int **)(param_1 + 0x2c),0,auStack_48c,0x21,0);
    *(int *)(param_1 + 0x28) = iVar8;
    if (-1 < iVar8) {
      uVar3 = (**(code **)(**(int **)(iStack_4 + 8) + 0x30))();
      piVar11 = *(int **)(iStack_4 + 8);
      iVar8 = (**(code **)(*piVar11 + 0x24))();
      if (iVar8 == 0) {
        (**(code **)(*piVar11 + 0x14))();
      }
      else {
        (**(code **)(*piVar11 + 0x14))();
      }
      iVar8 = (**(code **)(**(int **)(iStack_4 + 8) + 0x2c))(uVar3,0,0);
      puVar9 = (undefined4 *)0x0;
      if (&stack0x00000000 != (undefined1 *)0x47c) {
        do {
          uVar7 = 0;
          if (unaff_EDI >> 2 != 0) {
            puVar5 = (undefined4 *)(iVar6 + 8);
            do {
              uVar3 = *(undefined4 *)(iVar8 + uVar7 * 4);
              puVar5[-2] = CONCAT13((char)uVar3,(int3)puVar5[-2]);
              puVar5[-1] = CONCAT13((char)((uint)uVar3 >> 8),(int3)puVar5[-1]);
              *puVar5 = CONCAT13((char)((uint)uVar3 >> 0x10),(int3)*puVar5);
              puVar5[1] = CONCAT13((char)((uint)uVar3 >> 0x18),(int3)puVar5[1]);
              puVar5 = puVar5 + 4;
              uVar7 = uVar7 + 1;
            } while (uVar7 < unaff_EDI >> 2);
          }
          iVar6 = iVar6 + ((int)(unaff_ESI + (unaff_ESI >> 0x1f & 3U)) >> 2) * 4;
          iVar8 = iVar8 + ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) * 4;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        } while (puVar9 < local_47c);
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x80))(*(int **)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      (**(code **)(**(int **)(iStack_4 + 8) + 0x34))();
      return -1 < *(int *)(param_1 + 0x28);
    }
  }
  return false;
}

