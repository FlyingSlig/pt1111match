// FUNCTION: PORT1111 0x0047a630
// name: FUN_0047a630
// sig: undefined4 FUN_0047a630(int param_1)


undefined4 __fastcall FUN_0047a630(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  bVar1 = *(byte *)(param_1 + 0x2c);
  bVar3 = bVar1 >> 1 & 1;
  if ((bVar3 == 0) || ((bVar1 & 1) == 0)) {
    if (bVar3 != 0) {
      return 1;
    }
    *(byte *)(param_1 + 0x2c) = bVar1 & 0xfd;
    *(undefined2 *)(param_1 + 0x2e) = 0xffff;
    SetRectEmpty((LPRECT)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0;
    if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2 != 0)) {
      *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 2;
      puVar4 = *(undefined4 **)(iVar2 + 4);
      if (puVar4 != *(undefined4 **)(iVar2 + 8)) {
        do {
          iVar2 = FUN_0047bf20((void *)*puVar4,*(int *)(*(int *)(param_1 + 0xc) + 0x10));
          if (iVar2 == 0) {
            return 0;
          }
          puVar4 = puVar4 + 1;
        } while (puVar4 != *(undefined4 **)(*(int *)(param_1 + 0x14) + 8));
      }
      FUN_0047a600(param_1);
      return 1;
    }
  }
  return 0;
}

