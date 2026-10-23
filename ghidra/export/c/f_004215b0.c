// FUNCTION: PORT1111 0x004215b0
// name: FUN_004215b0
// sig: undefined4 FUN_004215b0(int param_1)


undefined4 __fastcall FUN_004215b0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_00419480(param_1 + 8);
  piVar5 = (int *)(param_1 + 0x1c);
  iVar4 = 10;
  do {
    if (*piVar5 != 0) {
      iVar3 = (int)*(short *)(*piVar5 + 0x34);
      pvVar1 = (void *)FUN_004750b0(*(int *)((int)DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar1,iVar3);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)(DAT_004e2b10 + 0x18) != 0) {
    pvVar1 = (void *)FUN_00468ef0(DAT_004e2b14,1);
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_0047d0a0(pvVar1,3);
      if (uVar2 != 0) {
        FUN_0046ff40(*(int **)(uVar2 + 0xb0));
      }
    }
  }
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00478a10(*(int *)(param_1 + 0x14));
    FUN_004788b0(*(int *)(param_1 + 0x14));
    iVar4 = (int)*(short *)(*(int *)(param_1 + 0x14) + 0x34);
    pvVar1 = (void *)FUN_004750b0(*(int *)((int)DAT_004e2b14 + 0xf8));
    FUN_00477b30(pvVar1,iVar4);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00476d40(*(void **)((int)DAT_004e2b14 + 0xf8),*(int *)(*(int *)(param_1 + 0x18) + 0x34),
                 (int *)0x0);
  }
  return 1;
}

