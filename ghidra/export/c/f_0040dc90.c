// FUNCTION: PORT1111 0x0040dc90
// name: FUN_0040dc90
// sig: undefined FUN_0040dc90(int param_1)


void __fastcall FUN_0040dc90(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00407810(*(void **)(param_1 + 0x60));
  iVar2 = *(int *)(param_1 + 0x13c);
  iVar4 = 0;
  if (0 < *(int *)(&DAT_004bd638 + iVar2 * 0x290)) {
    piVar3 = (int *)(param_1 + 300);
    do {
      pvVar1 = (void *)FUN_004267d0(*(void **)(param_1 + 0x40),
                                    (int *)(&DAT_004bd63c + (iVar2 * 0x52 + iVar4) * 8));
      if (*piVar3 != 0) {
        FUN_004288e0(pvVar1,*piVar3);
      }
      iVar2 = *(int *)(param_1 + 0x13c);
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(&DAT_004bd638 + iVar2 * 0x290));
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  iVar4 = 0;
  if (0 < *(int *)(&DAT_004bd614 + iVar2 * 0x290)) {
    do {
      pvVar1 = (void *)FUN_004267d0(*(void **)(param_1 + 0x40),
                                    (int *)(&DAT_004bd618 + (iVar2 * 0x52 + iVar4) * 8));
      FUN_00428930(pvVar1,param_1);
      FUN_00423d50(&DAT_004e26e8,*(int *)((int)pvVar1 + 0x50));
      iVar2 = *(int *)(param_1 + 0x13c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(&DAT_004bd614 + iVar2 * 0x290));
  }
  FUN_00423e10(&DAT_004e26e8,*(byte *)(*(int *)(param_1 + 0x70) + 0x34),
               *(int *)(*(int *)(param_1 + 0x40) + 0x50));
  FUN_00423d90(&DAT_004e26e8,*(uint *)(*(int *)(param_1 + 0x40) + 0x50));
  FUN_00406500(param_1);
  return;
}

