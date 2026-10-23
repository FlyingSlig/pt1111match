// FUNCTION: PORT1111 0x004059c0
// name: FUN_004059c0
// sig: bool FUN_004059c0(int param_1)


bool __fastcall FUN_004059c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if ((piVar1 != (int *)0x0) && (piVar1[0x1f] == 0)) {
    iVar2 = (**(code **)(piVar1[5] + 0x14))();
    if ((iVar2 != 0) || (*(int *)(*(int *)(param_1 + 0x70) + 0x3c) != 0)) {
      iVar2 = FUN_0045eb00(*(int *)(param_1 + 4),*(int *)(param_1 + 8),piVar1[1],piVar1[2],piVar1);
      return iVar2 <= *(int *)(*(int *)(param_1 + 0x50) + 0xf4) + 0x1e;
    }
  }
  return true;
}

