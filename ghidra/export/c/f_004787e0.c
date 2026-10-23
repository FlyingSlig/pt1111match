// FUNCTION: PORT1111 0x004787e0
// name: FUN_004787e0
// sig: undefined4 FUN_004787e0(int param_1)


undefined4 __fastcall FUN_004787e0(int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  int local_4;
  
  local_4 = param_1;
  FUN_0047a2f0(param_1);
  *(undefined2 *)(param_1 + 0x52) = 0xffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x54) = 0;
  iVar3 = FUN_0047a630(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (iVar3 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = (short)(*(int *)(*(int *)(param_1 + 0x14) + 8) - iVar3 >> 2);
  }
  *(short *)(param_1 + 0x54) = sVar2 + -1;
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x2c))(param_1);
  }
  local_4 = **(int **)(param_1 + 0x3c);
  if ((int *)local_4 != *(int **)(param_1 + 0x3c)) {
    do {
      if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
        puVar1 = (uint *)(*(int *)(local_4 + 0xc) + 0x28);
        *puVar1 = *puVar1 | 4;
      }
      FUN_004787e0(*(int *)(local_4 + 0xc));
      FUN_0040ca50(&local_4);
    } while (local_4 != *(int *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x60) + 0x28);
      *puVar1 = *puVar1 | 4;
    }
    FUN_0047a630(*(int *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x5c) + 0x28);
      *puVar1 = *puVar1 | 4;
    }
    FUN_0047a630(*(int *)(param_1 + 0x5c));
  }
  return 1;
}

