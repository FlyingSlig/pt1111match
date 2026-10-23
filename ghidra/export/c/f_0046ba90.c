// FUNCTION: PORT1111 0x0046ba90
// name: FUN_0046ba90
// sig: undefined FUN_0046ba90(void * this, int param_1, undefined4 param_2)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_0046ba90(void *this,int param_1,undefined4 param_2)

{
  int *_Memory;
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_EBX;
  int iVar14;
  int iVar15;
  int unaff_ESI;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  ushort *puVar19;
  int iStack_664;
  int local_660;
  uint uStack_65c;
  uint local_654;
  undefined4 uStack_650;
  void *pvStack_640;
  int iStack_62c;
  int iStack_618;
  ushort auStack_610 [2];
  int iStack_60c;
  int *local_608;
  ushort auStack_604 [256];
  ushort auStack_404 [256];
  undefined2 auStack_204 [254];
  int iStack_8;
  int local_4;
  
  local_4 = DAT_004ddb0c;
  _Memory = operator_new(0x10000);
  if (_Memory == (int *)0x0) {
    return;
  }
  local_608 = _Memory;
  pvVar1 = operator_new(0x10000);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = operator_new(0x10000);
    iVar3 = 0;
    if (pvVar2 != (void *)0x0) {
      do {
        pcVar17 = (char *)((int)pvVar1 + iVar3);
        pcVar17[(int)pvVar2 - (int)pvVar1] = (char)iVar3 << 3;
        iVar10 = iVar3 >> 0xb;
        *pcVar17 = (char)(iVar3 >> 5) << 2;
        iVar3 = iVar3 + 1;
        pcVar17[(int)_Memory - (int)pvVar1] = (char)iVar10 << 3;
      } while (iVar3 < 0x10000);
      iVar3 = 0;
      do {
        auStack_604[iVar3] = (ushort)(iVar3 >> 3);
        auStack_404[iVar3] = (ushort)((iVar3 >> 2) << 5);
        auStack_204[iVar3] = (short)((iVar3 >> 3) << 0xb);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      piVar4 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
      iVar3 = (**(code **)(*piVar4 + 0x54))(0x10,param_1,param_2);
      if (iVar3 != 0) {
        uStack_65c = 0;
        iVar3 = (**(code **)(*(int *)this + 4))();
        iStack_60c = (iVar3 * 0x10000 + -0x10000) / param_1;
        (**(code **)(*(int *)this + 8))();
        uVar5 = (**(code **)(*piVar4 + 0x30))();
        piVar6 = (int *)(**(code **)(*(int *)this + 0x30))();
        puVar7 = (ushort *)(**(code **)(*piVar4 + 0x2c))(uVar5,0,0);
        iVar3 = (**(code **)(*piVar4 + 0x24))();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*piVar4 + 0x14))();
          iVar3 = -iVar3;
        }
        else {
          iVar3 = (**(code **)(*piVar4 + 0x14))();
        }
        if (0 < local_4) {
          iStack_664 = local_4;
          pvVar1 = pvVar2;
          do {
            local_654 = (int)unaff_EBX >> 0x10;
            (**(code **)(*(int *)this + 0x2c))(uStack_650,0,local_654);
            iVar10 = (**(code **)(*(int *)this + 8))();
            uVar18 = local_654;
            if ((int)local_654 < iVar10 + -1) {
              uVar18 = local_654 + 1;
            }
            iVar10 = (**(code **)(*(int *)this + 0x2c))(uStack_65c,0,uVar18);
            iVar14 = (unaff_EBX & 0xffff) + 1;
            iVar8 = (~unaff_EBX & 0xffff) + 1;
            if (0 < iStack_8) {
              local_660 = iStack_8;
              puVar19 = puVar7;
              do {
                uVar11 = (uVar18 & 0xffff) * iVar14 >> 0x10;
                iVar15 = iVar14 - uVar11;
                iVar16 = (int)uVar18 >> 0x10;
                uVar12 = (uint)*(ushort *)(iVar10 + iVar16 * 2);
                uStack_65c = (uint)*(ushort *)(iVar10 + 2 + iVar16 * 2);
                uVar9 = (uint)*(ushort *)(iStack_62c + iVar16 * 2);
                uVar13 = (uint)*(ushort *)(iStack_62c + 2 + iVar16 * 2);
                uVar18 = (uVar18 & 0xffff) * iVar8 >> 0x10;
                iVar16 = iVar8 - uVar18;
                *puVar19 = auStack_610
                           [*(byte *)(uVar13 + (int)pvVar1) * uVar18 +
                            (uint)*(byte *)(uVar9 + (int)pvVar1) * iVar16 +
                            *(byte *)(uStack_65c + (int)pvVar1) * uVar11 +
                            (uint)*(byte *)(uVar12 + (int)pvVar1) * iVar15 >> 0x10] |
                           auStack_604
                           [(*(byte *)(unaff_ESI + uVar13) * uVar18 +
                             (uint)*(byte *)(uVar9 + unaff_ESI) * iVar16 +
                             *(byte *)(uStack_65c + unaff_ESI) * uVar11 +
                             (uint)*(byte *)(uVar12 + unaff_ESI) * iVar15 >> 0x10) + 0xfa] |
                           auStack_404
                           [(*(byte *)((int)piVar4 + uVar13) * uVar18 +
                             (uint)*(byte *)(uVar9 + (int)piVar4) * iVar16 +
                             *(byte *)(uStack_65c + (int)piVar4) * uVar11 +
                             (uint)*(byte *)(uVar12 + (int)piVar4) * iVar15 >> 0x10) + 0xfa];
                uVar18 = local_654 + iStack_618;
                puVar19 = puVar19 + 1;
                local_660 = local_660 + -1;
                pvVar1 = pvStack_640;
                _Memory = piVar4;
                local_654 = uVar18;
              } while (local_660 != 0);
            }
            unaff_EBX = unaff_EBX + (int)pvVar2;
            puVar7 = puVar7 + iVar3 / 2;
            iStack_664 = iStack_664 + -1;
            this = piVar6;
          } while (iStack_664 != 0);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    return;
  }
  return;
}

