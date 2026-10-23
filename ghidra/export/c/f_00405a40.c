// FUNCTION: PORT1111 0x00405a40
// name: FUN_00405a40
// sig: undefined1 FUN_00405a40(int param_1)


undefined1 __fastcall FUN_00405a40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if ((piVar1 != (int *)0x0) && (piVar1[0x1f] == 0)) {
    iVar2 = (**(code **)(piVar1[5] + 0x14))();
    if ((iVar2 != 0) || (*(int *)(*(int *)(param_1 + 0x70) + 0x3c) != 0)) {
      iVar2 = FUN_0045eb00(*(int *)(param_1 + 4),*(int *)(param_1 + 8),piVar1[1],piVar1[2],piVar1);
      if (iVar2 < *(int *)(*(int *)(param_1 + 0x50) + 0xf4)) {
        return 2;
      }
      return *(int *)(*(int *)(param_1 + 0x50) + 0xb0) < iVar2;
    }
  }
  return 1;
}

