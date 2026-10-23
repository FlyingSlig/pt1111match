// FUNCTION: PORT1111 0x004671b0
// name: FUN_004671b0
// sig: undefined FUN_004671b0(int param_1)


void __fastcall FUN_004671b0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x30);
  puVar4 = puVar1;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar1 = 0x7c;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x58))(*(int **)(param_1 + 0x2c),puVar1);
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar3 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x7c) == 0x20) {
    *(undefined4 *)(param_1 + 0x10) = 0x29;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x8c) | *(uint *)(param_1 + 0x88) | *(uint *)(param_1 + 0x90);
  if (uVar2 < 0x1000000) {
    if (uVar2 == 0xffffff) {
      *(undefined4 *)(param_1 + 0x10) = 0x14;
      return;
    }
    if (uVar2 == 0x7fff) {
      *(undefined4 *)(param_1 + 0x10) = 0x18;
      return;
    }
    if (uVar2 == 0xffff) {
      *(uint *)(param_1 + 0x10) = ((*(uint *)(param_1 + 0x90) != 0x1f) - 1 & 0xfffffffd) + 0x1a;
      return;
    }
  }
  else if (uVar2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x10) = 0x15;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

