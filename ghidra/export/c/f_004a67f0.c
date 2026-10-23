// FUNCTION: PORT1111 0x004a67f0
// name: FUN_004a67f0
// sig: undefined FUN_004a67f0(int * param_1, int param_2, int param_3, int param_4)


void __cdecl FUN_004a67f0(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int local_8;
  
  puVar2 = FUN_004a4710(param_1,(param_4 + *(int *)(param_2 + 0xd8)) * 0x10);
  puVar9 = *(undefined4 **)(param_2 + 0xd4);
  puVar11 = puVar2;
  for (iVar5 = (*(uint *)(param_2 + 0xd8) & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  FUN_004a4750((int)param_1,*(void **)(param_2 + 0xd4));
  *(undefined4 *)(param_2 + 0xd4) = 0;
  local_8 = 0;
  if (0 < param_4) {
    puVar8 = (uint *)(param_3 + 0xc);
    do {
      uVar6 = 0xffffffff;
      puVar9 = puVar2 + (local_8 + *(int *)(param_2 + 0xd8)) * 4;
      pcVar3 = (char *)puVar8[-3];
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = FUN_004a4710(param_1,~uVar6);
      uVar6 = 0xffffffff;
      *puVar9 = pcVar3;
      pcVar10 = (char *)puVar8[-3];
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar12 + -uVar6;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar3 = pcVar3 + 1;
      }
      puVar4 = FUN_004a4710(param_1,*puVar8 << 4);
      puVar9[2] = puVar4;
      puVar11 = (undefined4 *)puVar8[-1];
      for (iVar5 = (*puVar8 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar4 = puVar4 + 1;
      }
      local_8 = local_8 + 1;
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar9[3] = *puVar8;
      *(char *)(puVar9 + 1) = (char)puVar8[-2];
      puVar8 = puVar8 + 4;
    } while (local_8 < param_4);
  }
  *(undefined4 **)(param_2 + 0xd4) = puVar2;
  *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + param_4;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
  *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x20;
  return;
}

