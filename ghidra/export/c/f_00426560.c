// FUNCTION: PORT1111 0x00426560
// name: FUN_00426560
// sig: undefined FUN_00426560(int param_1)


void __fastcall FUN_00426560(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = operator_new(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18) * 4);
  iVar5 = 0;
  *(void **)(param_1 + 0xc) = pvVar2;
  if (0 < *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_00429050(&DAT_004e20c8,*(int **)(iVar4 + 4 + *(int *)(param_1 + 8)));
      *(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) = iVar3;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar5 < *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18));
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
    _free(puVar1 + -1);
  }
  (**(code **)*puVar1)(3);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

