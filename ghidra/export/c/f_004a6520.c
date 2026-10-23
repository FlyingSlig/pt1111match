// FUNCTION: PORT1111 0x004a6520
// name: FUN_004a6520
// sig: undefined FUN_004a6520(int * param_1, int param_2, int param_3, int param_4)


void __cdecl FUN_004a6520(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int local_4;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) {
    uVar5 = *(uint *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x30) + param_4;
    if ((int)uVar5 < iVar2) {
      puVar10 = *(undefined4 **)(param_2 + 0x38);
      if (puVar10 == (undefined4 *)0x0) {
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(int *)(param_2 + 0x34) = param_4 + 8;
        pvVar4 = FUN_004a4710(param_1,(param_4 + 8) * 0x10);
        *(void **)(param_2 + 0x38) = pvVar4;
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x4000;
      }
      else {
        iVar2 = iVar2 + 8;
        *(int *)(param_2 + 0x34) = iVar2;
        puVar3 = FUN_004a4710(param_1,iVar2 * 0x10);
        *(undefined4 **)(param_2 + 0x38) = puVar3;
        puVar11 = puVar10;
        for (iVar2 = (uVar5 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar3 = puVar3 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        FUN_004a4750((int)param_1,puVar10);
      }
    }
    if (0 < param_4) {
      local_4 = param_4;
      puVar10 = (undefined4 *)(param_3 + 8);
      do {
        piVar9 = (int *)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
        if ((char *)puVar10[-1] != (char *)0x0) {
          uVar5 = 0xffffffff;
          pcVar12 = (char *)puVar10[-1];
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          uVar6 = ~uVar5 - 1;
          if ((int)puVar10[-2] < 1) {
            pcVar12 = (char *)*puVar10;
            if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) {
              uVar7 = 0;
              *piVar9 = -1;
            }
            else {
              uVar7 = 0xffffffff;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              *piVar9 = puVar10[-2];
              uVar7 = ~uVar7 - 1;
            }
            puVar3 = FUN_004a4710(param_1,~uVar5 + 3 + uVar7);
            piVar9[1] = (int)puVar3;
            puVar11 = (undefined4 *)puVar10[-1];
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar3 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar3 = puVar3 + 1;
            }
            for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar3 = *(undefined1 *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
            *(undefined1 *)(piVar9[1] + uVar6) = 0;
            puVar11 = (undefined4 *)(piVar9[1] + 1 + uVar6);
            piVar9[2] = (int)puVar11;
            if (uVar7 != 0) {
              puVar3 = (undefined4 *)*puVar10;
              for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar11 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
                puVar3 = (undefined4 *)((int)puVar3 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
            }
            *(undefined1 *)(piVar9[2] + uVar7) = 0;
            piVar9[3] = uVar7;
            piVar8 = (int *)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
            *piVar8 = *piVar9;
            piVar8[1] = piVar9[1];
            piVar8[2] = piVar9[2];
            piVar8[3] = piVar9[3];
            *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
          }
          else {
            FUN_004ac710((int)param_1,s_iTXt_chunk_not_supported__004df0f4);
          }
        }
        puVar10 = puVar10 + 4;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
  }
  return;
}

