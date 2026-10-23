// FUNCTION: PORT1111 0x00478a10
// name: FUN_00478a10
// sig: undefined4 FUN_00478a10(int param_1)


undefined4 __fastcall FUN_00478a10(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int local_4;
  
  bVar1 = *(byte *)(param_1 + 0x2c);
  if (((bVar1 & 2) != 0) && ((bVar1 & 1) != 0)) {
    *(undefined2 *)(param_1 + 0x2e) = 0xffff;
    *(byte *)(param_1 + 0x2c) = bVar1 & 0xf6 | 0x80;
    *(undefined2 *)(param_1 + 0x50) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    if (iVar2 == 0) {
      sVar3 = 0;
    }
    else {
      sVar3 = (short)(*(int *)(*(int *)(param_1 + 0x14) + 8) - iVar2 >> 2);
    }
    *(short *)(param_1 + 0x54) = sVar3 + -1;
    if ((((bVar1 & 0x10) != 0) && (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x1c) != 0)) {
      local_4 = param_1;
      FUN_0040ff50();
    }
    local_4 = **(int **)(param_1 + 0x3c);
    if ((int *)local_4 != *(int **)(param_1 + 0x3c)) {
      do {
        FUN_00478a10(*(int *)(local_4 + 0xc));
        FUN_0040ca50(&local_4);
      } while (local_4 != *(int *)(param_1 + 0x3c));
    }
    return 1;
  }
  return 0;
}

