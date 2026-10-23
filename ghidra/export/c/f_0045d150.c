// FUNCTION: PORT1111 0x0045d150
// name: FUN_0045d150
// sig: undefined FUN_0045d150(void * this, int param_1)


void __thiscall FUN_0045d150(void *this,int param_1)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_30;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9698;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 0x3c) & 8) == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x60) + 0x1c);
    if (*(int *)((int)this + 0x7c) == 0) {
      ExceptionList = &local_c;
      if (*(int *)((int)this + 0x74) != 0) {
        puVar12 = (undefined4 *)**(undefined4 **)((int)this + 0x70);
        local_18 = 0;
        ExceptionList = &local_c;
        ppvVar2 = &local_c;
        if (*(int *)((int)this + 0x74) != 1) {
          do {
            ExceptionList = ppvVar2;
            iVar8 = FUN_0045cf80(puVar12[2]);
            if (iVar8 != -1) {
              pvVar6 = operator_new(0x18);
              local_4 = 4;
              if (pvVar6 == (void *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_0045c3e0(pvVar6,0x15,iVar8,0);
              }
              local_4 = 0xffffffff;
              (**(code **)(*piVar1 + 0xc))(uVar7);
            }
            iVar8 = *(short *)(puVar12[2] + 4) + 0x20;
            iVar15 = *(short *)(puVar12[2] + 6) + 0x10;
            pvVar6 = operator_new(0x18);
            local_4 = 5;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_0045c3e0(pvVar6,0,iVar8,iVar15);
            }
            local_4 = 0xffffffff;
            (**(code **)(*piVar1 + 0xc))(uVar7);
            puVar12 = (undefined4 *)*puVar12;
            (**(code **)(*piVar1 + 0x20))(iVar8,iVar15);
            local_18 = local_18 + 1;
            ppvVar2 = ExceptionList;
          } while (local_18 < *(int *)((int)this + 0x74) - 1U);
        }
      }
    }
    else {
      iVar14 = *(int *)((int)this + 4);
      iVar13 = *(int *)((int)this + 8);
      uVar3 = *(int *)((int)this + 0x38) - iVar14;
      uVar10 = (int)uVar3 >> 0x1f;
      iVar9 = (uVar3 ^ uVar10) - uVar10;
      uVar3 = *(int *)((int)this + 0x3c) - iVar13;
      uVar10 = (int)uVar3 >> 0x1f;
      iVar4 = (uVar3 ^ uVar10) - uVar10;
      local_30 = 1;
      iVar8 = (uint)(iVar14 <= *(int *)((int)this + 0x38)) * 2 + -1;
      iVar15 = (uint)(iVar13 <= *(int *)((int)this + 0x3c)) * 2 + -1;
      if (iVar9 < iVar4) {
        iVar9 = iVar9 * 2;
        iVar11 = iVar9 - iVar4;
        ExceptionList = &local_c;
        if (-1 < iVar4) {
          local_18 = iVar4 + 1;
          ExceptionList = &local_c;
          do {
            if (local_30 % 0x32 == 0) {
              iVar5 = FUN_00429b40(DAT_004e2404,iVar14,iVar13);
              if ((iVar5 != 0) && (iVar5 = FUN_0045cf80(iVar5), iVar5 != -1)) {
                pvVar6 = operator_new(0x18);
                local_4 = 2;
                if (pvVar6 == (void *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_0045c3e0(pvVar6,0x15,iVar5,0);
                }
                local_4 = 0xffffffff;
                (**(code **)(*piVar1 + 0xc))(uVar7);
              }
              pvVar6 = operator_new(0x18);
              local_4 = 3;
              if (pvVar6 == (void *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_0045c3e0(pvVar6,0,iVar14,iVar13);
              }
              local_4 = 0xffffffff;
              (**(code **)(*piVar1 + 0xc))(uVar7);
              (**(code **)(*piVar1 + 0x20))(iVar14,iVar13);
            }
            iVar13 = iVar13 + iVar15;
            iVar5 = iVar9;
            if (0 < iVar11) {
              iVar14 = iVar14 + iVar8;
              iVar5 = iVar9 + iVar4 * -2;
            }
            iVar11 = iVar11 + iVar5;
            local_30 = local_30 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      else {
        iVar4 = iVar4 * 2;
        iVar11 = iVar4 - iVar9;
        ExceptionList = &local_c;
        if (-1 < iVar9) {
          local_18 = iVar9 + 1;
          ExceptionList = &local_c;
          do {
            if (local_30 % 0x32 == 0) {
              iVar5 = FUN_00429b40(DAT_004e2404,iVar14,iVar13);
              if ((iVar5 != 0) && (iVar5 = FUN_0045cf80(iVar5), iVar5 != -1)) {
                pvVar6 = operator_new(0x18);
                local_4 = 0;
                if (pvVar6 == (void *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_0045c3e0(pvVar6,0x15,iVar5,0);
                }
                local_4 = 0xffffffff;
                (**(code **)(*piVar1 + 0xc))(uVar7);
              }
              pvVar6 = operator_new(0x18);
              local_4 = 1;
              if (pvVar6 == (void *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_0045c3e0(pvVar6,0,iVar14,iVar13);
              }
              local_4 = 0xffffffff;
              (**(code **)(*piVar1 + 0xc))(uVar7);
              (**(code **)(*piVar1 + 0x20))(iVar14,iVar13);
            }
            iVar5 = iVar4;
            if (0 < iVar11) {
              iVar13 = iVar13 + iVar15;
              iVar5 = iVar4 + iVar9 * -2;
            }
            iVar14 = iVar14 + iVar8;
            iVar11 = iVar11 + iVar5;
            local_30 = local_30 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
    }
    pvVar6 = operator_new(0x18);
    local_4 = 6;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0045c3e0(pvVar6,0,*(undefined4 *)((int)this + 0x38),
                           *(undefined4 *)((int)this + 0x3c));
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar1 + 0xc))(uVar7);
    (**(code **)(*piVar1 + 0x20))
              (*(undefined4 *)((int)this + 0x38),*(undefined4 *)((int)this + 0x3c));
    FUN_00412740(puStack_8,*(undefined4 *)((int)this + 0x38),*(undefined4 *)((int)this + 0x3c));
    puStack_8 = operator_new(0x18);
    if (puStack_8 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0045c3e0(puStack_8,4,*(undefined4 *)((int)this + 0x38),
                           *(undefined4 *)((int)this + 0x3c));
    }
    (**(code **)(*piVar1 + 0xc))(uVar7);
  }
  ExceptionList = local_c;
  return;
}

