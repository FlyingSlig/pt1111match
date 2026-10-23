// FUNCTION: PORT1111 0x00463f90
// name: FUN_00463f90
// sig: undefined FUN_00463f90(int param_1)


void __cdecl FUN_00463f90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16b4) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined2 *)(param_1 + 0x16b0) = 0;
    *(undefined4 *)(param_1 + 0x16b4) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16b4)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(ushort *)(param_1 + 0x16b0) = (ushort)*(byte *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -8;
  }
  return;
}

