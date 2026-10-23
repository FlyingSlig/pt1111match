// FUNCTION: PORT1111 0x004a6950
// name: FUN_004a6950
// sig: undefined FUN_004a6950(int * param_1, int param_2, int param_3, int param_4)


void __cdecl FUN_004a6950(int *param_1,int param_2,int param_3,int param_4)

{
  size_t sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t *psVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  size_t *psVar10;
  size_t *psVar11;
  int local_8;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) {
    puVar2 = FUN_004a4710(param_1,(*(int *)(param_2 + 0xc0) + param_4) * 0x14);
    puVar8 = *(undefined4 **)(param_2 + 0xbc);
    puVar9 = puVar2;
    for (uVar4 = *(int *)(param_2 + 0xc0) * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_004a4750((int)param_1,*(void **)(param_2 + 0xbc));
    *(undefined4 *)(param_2 + 0xbc) = 0;
    local_8 = 0;
    if (0 < param_4) {
      psVar7 = (size_t *)(param_3 + 0xc);
      do {
        puVar8 = puVar2 + (*(int *)(param_2 + 0xc0) + local_8) * 5;
        uVar4 = 0xffffffff;
        psVar10 = psVar7 + -3;
        do {
          psVar11 = psVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          psVar11 = (size_t *)((int)psVar10 + 1);
          sVar1 = *psVar10;
          psVar10 = psVar11;
        } while ((char)sVar1 != '\0');
        uVar4 = ~uVar4;
        puVar9 = (undefined4 *)((int)psVar11 - uVar4);
        puVar3 = puVar8;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar3 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        puVar3 = FUN_004a4710(param_1,*psVar7);
        puVar8[2] = puVar3;
        uVar4 = *psVar7;
        puVar9 = (undefined4 *)psVar7[-1];
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar3 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        puVar8[3] = *psVar7;
        local_8 = local_8 + 1;
        *(char *)(puVar8 + 4) = (char)param_1[0x1a];
        psVar7 = psVar7 + 5;
      } while (local_8 < param_4);
    }
    *(undefined4 **)(param_2 + 0xbc) = puVar2;
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x200;
  }
  return;
}

