// FUNCTION: PORT1111 0x0041bfa0
// name: FUN_0041bfa0
// sig: undefined4 FUN_0041bfa0(int param_1)


undefined4 __fastcall FUN_0041bfa0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00417350(DAT_004e240c);
  iVar1 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  if (iVar1 != 0) {
    puVar2 = FUN_00476aa0(*(void **)(DAT_004e2b14 + 0xf8),iVar1);
    *(undefined4 **)(param_1 + 0x60) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = FUN_00475080((int)puVar2);
      *(int *)(param_1 + 0x5c) = iVar1;
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 4;
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x5c) + 0x60);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
          *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x60) = 0;
        }
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x5c) + 0x5c);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
          *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x5c) = 0;
        }
        FUN_004787e0(*(int *)(param_1 + 0x5c));
        return 1;
      }
    }
  }
  return 0;
}

