// FUNCTION: PORT1111 0x00420a30
// name: FUN_00420a30
// sig: undefined FUN_00420a30(int * param_1)


void __fastcall FUN_00420a30(int *param_1)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint local_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pvVar2 = *(void **)(DAT_004e240c + 0x34);
  if ((((*(byte *)((int)pvVar2 + 0x2c) & 1) != 0) && ((*(byte *)((int)pvVar2 + 0x2c) & 0x20) != 0))
     && (*(short *)((int)pvVar2 + 0x2e) != -1)) {
    FUN_0040fa50(pvVar2,0);
  }
  piVar9 = (int *)FUN_0042d310(*(int *)(DAT_004e2404 + 0x8c));
  iVar11 = *piVar9;
  while (iVar11 != 0) {
    puVar10 = (uint *)FUN_0040a300(*piVar9);
    if (puVar10 != (uint *)0x0) {
      uVar3 = *puVar10;
      uVar4 = puVar10[2];
      local_28 = 0;
      if (uVar3 != 0) {
        do {
          if ((DAT_004e2681 == '\0') ||
             (iVar11 = (**(code **)(**(int **)(uVar4 + local_28 * 4) + 0x10))(), iVar11 != 0)) {
            iVar11 = (**(code **)(**(int **)(uVar4 + local_28 * 4) + 4))();
            (**(code **)(**(int **)(uVar4 + local_28 * 4) + 0x1c))();
            if (((*(byte *)(iVar11 + 0x2c) & 1) != 0) &&
               (((*(byte *)(iVar11 + 0x2c) & 0x20) != 0 && (*(short *)(iVar11 + 0x2e) != -1)))) {
              iStack_14 = iVar11;
              uStack_10 = (**(code **)(**(int **)(uVar4 + local_28 * 4) + 8))();
              uStack_c = (**(code **)(**(int **)(uVar4 + local_28 * 4) + 0x14))();
              if (*(int *)(iVar11 + 0x10) == 1) {
                FUN_00420810(param_1 + 0x13,&iStack_14);
              }
              else {
                FUN_00420810(param_1 + 0xf,&iStack_14);
                iVar12 = (**(code **)(**(int **)(uVar4 + local_28 * 4) + 0x14))();
                if (iVar12 != 0) {
                  iStack_18 = iVar11;
                  if (*(int *)(iVar11 + 0x5c) != 0) {
                    iStack_1c = *(int *)(iVar11 + 0x5c);
                    FUN_00420890(param_1 + 0x17,&iStack_1c);
                  }
                  piVar14 = (int *)**(int **)(iVar11 + 0x3c);
                  if (piVar14 != *(int **)(iVar11 + 0x3c)) {
                    do {
                      iVar12 = piVar14[3];
                      if (*(uint *)(iVar12 + 0x10) <= *(uint *)(iVar11 + 0x10)) {
                        iVar5 = param_1[0x1c];
                        iStack_1c = iVar12;
                        if ((iVar5 == 0) ||
                           ((uint)(param_1[0x1e] - iVar5 >> 3) <= (uint)(param_1[0x1d] - iVar5 >> 3)
                           )) {
                          FUN_004201f0(param_1 + 0x1b,(undefined4 *)param_1[0x1d],1,&iStack_1c);
                        }
                        else {
                          puVar13 = (undefined4 *)param_1[0x1d];
                          FUN_0041f4d0(puVar13,1,&iStack_1c);
                          param_1[0x1d] = (int)(puVar13 + 2);
                        }
                      }
                      if (*(char *)((int)piVar14 + 0x11) == '\0') {
                        piVar6 = (int *)piVar14[2];
                        if (*(char *)((int)piVar6 + 0x11) == '\0') {
                          cVar1 = *(char *)(*piVar6 + 0x11);
                          piVar14 = piVar6;
                          piVar6 = (int *)*piVar6;
                          while (cVar1 == '\0') {
                            cVar1 = *(char *)(*piVar6 + 0x11);
                            piVar14 = piVar6;
                            piVar6 = (int *)*piVar6;
                          }
                        }
                        else {
                          cVar1 = *(char *)(piVar14[1] + 0x11);
                          piVar8 = (int *)piVar14[1];
                          piVar6 = piVar14;
                          while ((piVar14 = piVar8, cVar1 == '\0' && (piVar6 == (int *)piVar14[2])))
                          {
                            cVar1 = *(char *)(piVar14[1] + 0x11);
                            piVar8 = (int *)piVar14[1];
                            piVar6 = piVar14;
                          }
                        }
                      }
                    } while (piVar14 != *(int **)(iVar11 + 0x3c));
                  }
                }
              }
            }
          }
          local_28 = local_28 + 1;
        } while (local_28 < uVar3);
      }
    }
    piVar14 = piVar9 + 1;
    piVar9 = piVar9 + 1;
    iVar11 = *piVar14;
  }
  puVar13 = (undefined4 *)param_1[0x14];
  if (puVar13 != (undefined4 *)param_1[0x15]) {
    do {
      FUN_0040fa50((void *)*puVar13,puVar13[1]);
      puVar13 = puVar13 + 3;
    } while (puVar13 != (undefined4 *)param_1[0x15]);
  }
  if ((2 < DAT_004e2678) &&
     (puVar13 = (undefined4 *)param_1[0x18], puVar13 != (undefined4 *)param_1[0x19])) {
    do {
      FUN_0047a3a0((void *)*puVar13,puVar13[1],0);
      puVar13 = puVar13 + 2;
    } while (puVar13 != (undefined4 *)param_1[0x19]);
  }
  if ((3 < DAT_004e2678) &&
     (puVar13 = (undefined4 *)param_1[0x1c], puVar13 != (undefined4 *)param_1[0x1d])) {
    do {
      FUN_0047a3a0((void *)*puVar13,puVar13[1],0);
      puVar13 = puVar13 + 2;
    } while (puVar13 != (undefined4 *)param_1[0x1d]);
  }
  puVar13 = (undefined4 *)param_1[0x10];
  if (puVar13 != (undefined4 *)param_1[0x11]) {
    do {
      pvVar2 = (void *)*puVar13;
      FUN_0040fa50(pvVar2,puVar13[1]);
      piVar9 = (int *)**(int **)((int)pvVar2 + 0x3c);
      if (piVar9 != *(int **)((int)pvVar2 + 0x3c)) {
        do {
          if (puVar13[2] == 0) break;
          if (*(uint *)((int)pvVar2 + 0x10) < *(uint *)(piVar9[3] + 0x10)) {
            FUN_0047a3a0((void *)piVar9[3],(int)pvVar2,0);
          }
          if (*(char *)((int)piVar9 + 0x11) == '\0') {
            piVar14 = (int *)piVar9[2];
            if (*(char *)((int)piVar14 + 0x11) == '\0') {
              cVar1 = *(char *)(*piVar14 + 0x11);
              piVar9 = piVar14;
              piVar14 = (int *)*piVar14;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar14 + 0x11);
                piVar9 = piVar14;
                piVar14 = (int *)*piVar14;
              }
            }
            else {
              cVar1 = *(char *)(piVar9[1] + 0x11);
              piVar6 = (int *)piVar9[1];
              piVar14 = piVar9;
              while ((piVar9 = piVar6, cVar1 == '\0' && (piVar14 == (int *)piVar9[2]))) {
                cVar1 = *(char *)(piVar9[1] + 0x11);
                piVar6 = (int *)piVar9[1];
                piVar14 = piVar9;
              }
            }
          }
        } while (piVar9 != *(int **)((int)pvVar2 + 0x3c));
      }
      puVar13 = puVar13 + 3;
    } while (puVar13 != (undefined4 *)param_1[0x11]);
  }
  piVar9 = *(int **)param_1[0x20];
  if (piVar9 != (int *)param_1[0x20]) {
    do {
      iVar11 = piVar9[3];
      if ((((*(byte *)(iVar11 + 0x2c) & 1) != 0) && ((*(byte *)(iVar11 + 0x2c) & 0x20) != 0)) &&
         (*(short *)(iVar11 + 0x2e) != -1)) {
        puVar13 = *(undefined4 **)
                   (*(int *)(*(int *)(iVar11 + 0x14) + 4) + *(short *)(iVar11 + 0x2e) * 4);
        if (*(char *)(iVar11 + 0x28) < '\0') {
          (**(code **)(*(int *)(iVar11 + 0xc) + 0x28))(iVar11,puVar13,iVar11 + 0x18,0);
        }
        uVar7 = *(undefined4 *)(iVar11 + 0x44);
        *(byte *)(iVar11 + 0x2c) = *(byte *)(iVar11 + 0x2c) | 0x10;
        (**(code **)*puVar13)
                  (*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0xc) + 0x10) + 0x1c),
                   *(undefined4 *)(iVar11 + 0x18),*(undefined4 *)(iVar11 + 0x1c),uVar7);
        if ((*(byte *)(iVar11 + 0x28) & 0x40) != 0) {
          (**(code **)(*(int *)(iVar11 + 0xc) + 0x24))(iVar11,puVar13,iVar11 + 0x18,uVar7);
        }
      }
      if (*(char *)((int)piVar9 + 0x11) == '\0') {
        piVar14 = (int *)piVar9[2];
        if (*(char *)((int)piVar14 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar14 + 0x11);
          piVar9 = piVar14;
          piVar14 = (int *)*piVar14;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar14 + 0x11);
            piVar9 = piVar14;
            piVar14 = (int *)*piVar14;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x11);
          piVar6 = (int *)piVar9[1];
          piVar14 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar14 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x11);
            piVar6 = (int *)piVar9[1];
            piVar14 = piVar9;
          }
        }
      }
    } while (piVar9 != (int *)param_1[0x20]);
  }
  (**(code **)(*param_1 + 0xc))(10);
  if ((void *)param_1[0x10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if ((void *)param_1[0x14] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if ((void *)param_1[0x18] == (void *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    if ((void *)param_1[0x1c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x1c]);
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x18]);
}

