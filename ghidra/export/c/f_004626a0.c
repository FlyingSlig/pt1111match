// FUNCTION: PORT1111 0x004626a0
// name: FUN_004626a0
// sig: undefined FUN_004626a0(int param_1, undefined1 * param_2, int param_3, int param_4)


void __cdecl FUN_004626a0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16b4);
  if (iVar1 < 0xe) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar1 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b1);
    iVar1 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b4) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
  }
  FUN_004640a0(param_1,param_2,param_3,1);
  return;
}

