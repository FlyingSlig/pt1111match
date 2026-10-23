// FUNCTION: PORT1111 0x004074c0
// name: FUN_004074c0
// sig: undefined FUN_004074c0(int param_1)


void __fastcall FUN_004074c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_00475080(*(int *)(param_1 + 4));
  iVar4 = *(int *)(*(int *)(iVar1 + 0x14) + 4);
  if (((iVar4 != 0) && (*(int *)(*(int *)(iVar1 + 0x14) + 8) - iVar4 >> 2 != 0)) &&
     (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x50) + 0x124), 0 < iVar4)) {
    puVar2 = operator_new(iVar4 << 2);
    *(undefined4 **)(param_1 + 0x50) = puVar2;
    for (uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x34) + 0x50) + 0x124) & 0x3fffffff;
        uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

