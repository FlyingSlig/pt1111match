// FUNCTION: PORT1111 0x00413500
// name: FUN_00413500
// sig: undefined FUN_00413500(int param_1)


void __fastcall FUN_00413500(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (DVar2 = GetTickCount(), 100 < DVar2 - *(int *)(param_1 + 0x44))) {
    if (*(int *)(param_1 + 0x48) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x30) = 1;
      FUN_00433e30(DAT_004e2424);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x4c) == 10) {
      if (iVar1 != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_00433e30(DAT_004e2424);
      return;
    }
    *(uint *)(*(int *)(iVar1 + 0x60) + 0x30) = (uint)(*(int *)(*(int *)(iVar1 + 0x60) + 0x30) == 0);
    DVar2 = GetTickCount();
    *(DWORD *)(param_1 + 0x44) = DVar2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  FUN_00433e30(DAT_004e2424);
  return;
}

