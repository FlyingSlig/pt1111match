// FUNCTION: PORT1111 0x00417d70
// name: FUN_00417d70
// sig: undefined FUN_00417d70(int param_1)


void __fastcall FUN_00417d70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x50));
  }
  iVar2 = *(int *)(param_1 + 0x2c) + 1 + *(int *)(param_1 + 0x4c) * 2;
  uVar3 = iVar2 * 0xc + 4;
  puVar1 = operator_new(uVar3);
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  **(int **)(param_1 + 0x50) = iVar2;
  local_20 = *(int *)(param_1 + 0x2c) / 2 + *(int *)(param_1 + 0x4c);
  local_10 = local_20 * local_20;
  local_c = (local_20 + -1) * local_20;
  local_14 = -local_20;
  local_1c = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    **(undefined4 **)(param_1 + 0x50) = 0;
    return;
  }
  local_4 = local_20 * 2;
  iVar5 = local_20 * 0xc;
  iVar4 = local_20 * -0xc;
  iVar6 = local_20 * 0x18;
  local_8 = 0;
  local_18 = 0;
  iVar2 = 0;
  do {
    *(int *)((*(int *)(param_1 + 0x50) - iVar2) + 4) = local_14;
    *(int *)((*(int *)(param_1 + 0x50) - iVar2) + 8) = local_18;
    *(int *)((*(int *)(param_1 + 0x50) - iVar2) + 0xc) = local_1c;
    *(int *)(iVar6 + 4 + *(int *)(param_1 + 0x50)) = local_20;
    *(int *)(iVar6 + 8 + *(int *)(param_1 + 0x50)) = local_18;
    *(int *)(iVar6 + 0xc + *(int *)(param_1 + 0x50)) = local_1c;
    *(int *)((*(int *)(param_1 + 0x50) - iVar4) + 4) = local_18;
    *(int *)((*(int *)(param_1 + 0x50) - iVar4) + 8) = local_14;
    *(int *)((*(int *)(param_1 + 0x50) - iVar4) + 0xc) = local_20;
    *(int *)(iVar5 + 4 + *(int *)(param_1 + 0x50)) = local_1c;
    *(int *)(iVar5 + 8 + *(int *)(param_1 + 0x50)) = local_14;
    *(int *)(iVar5 + 0xc + *(int *)(param_1 + 0x50)) = local_20;
    local_1c = local_1c + 1;
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 0xc;
    local_18 = local_18 + -1;
    local_8 = local_8 + 2;
    local_10 = local_10 + (1 - local_8);
    if (local_10 <= local_c) {
      local_20 = local_20 + -1;
      iVar2 = iVar2 + -0xc;
      iVar6 = iVar6 + -0xc;
      local_14 = local_14 + 1;
      local_4 = local_4 + -2;
      local_c = local_c - local_4;
    }
  } while (local_1c <= local_20);
  return;
}

