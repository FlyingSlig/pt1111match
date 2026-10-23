// FUNCTION: PORT1111 0x0042d420
// name: FUN_0042d420
// sig: undefined FUN_0042d420(int param_1)


void __fastcall FUN_0042d420(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      iVar2 = (int)*(short *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4) + 0x34);
      pvVar1 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar1,iVar2);
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      iVar2 = (int)*(short *)(*(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4) + 0x34);
      pvVar1 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar1,iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1c));
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}

