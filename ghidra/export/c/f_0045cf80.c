// FUNCTION: PORT1111 0x0045cf80
// name: FUN_0045cf80
// sig: undefined4 FUN_0045cf80(int param_1)


undefined4 FUN_0045cf80(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_1 + 0x14);
  if (puVar1 != (uint *)0x0) {
    uVar4 = 0;
    if (*puVar1 != 0) {
      piVar3 = (int *)puVar1[2];
      do {
        iVar2 = *(int *)(*(int *)(*piVar3 + 0x50) + 0x14);
        if ((iVar2 == 0x36) || (iVar2 == 0x51)) {
          return *(undefined4 *)(*piVar3 + 0x10);
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar4 < *puVar1);
    }
  }
  return 0xffffffff;
}

