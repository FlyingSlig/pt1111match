// FUNCTION: PORT1111 0x00443cd0
// name: FUN_00443cd0
// sig: undefined4 FUN_00443cd0(int param_1)


undefined4 __fastcall FUN_00443cd0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = operator_new(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * 4);
  *(undefined4 **)(param_1 + 4) = puVar1;
  for (uVar2 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) & 0x3fffffff; uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

