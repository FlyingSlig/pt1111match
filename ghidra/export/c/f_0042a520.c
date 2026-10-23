// FUNCTION: PORT1111 0x0042a520
// name: FUN_0042a520
// sig: undefined FUN_0042a520(int param_1)


void __fastcall FUN_0042a520(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    (**(code **)(*(int *)puVar2[2] + 8))();
  }
  FUN_00414c60(DAT_004e240c);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10c) * *(int *)(param_1 + 0x110) != 0) {
    iVar4 = 0;
    do {
      FUN_00427690(*(int *)(param_1 + 0x118) + iVar4);
      FUN_00427440(*(int *)(param_1 + 0x118) + iVar4);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x6c;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x10c) * *(int *)(param_1 + 0x110)));
  }
  for (puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x18); puVar2 != puVar1;
      puVar2 = (undefined4 *)*puVar2) {
    (**(code **)(*(int *)puVar2[2] + 4))();
  }
  FUN_00414cf0(DAT_004e240c);
  return;
}

