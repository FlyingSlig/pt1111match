// FUNCTION: PORT1111 0x004454a0
// name: FUN_004454a0
// sig: undefined FUN_004454a0(void * param_1)


void __fastcall FUN_004454a0(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x18) + 0x50);
  iVar4 = *(int *)(iVar2 + 0x290);
  if ((iVar4 != 0) && (*(int *)(iVar2 + 0x294) - iVar4 >> 2 != 0)) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x18) + 0x88))();
    iVar2 = *(int *)(iVar2 + 0x34);
    FUN_00444fc0(param_1);
    piVar5 = (int *)**(int **)(DAT_004e2420 + 0x1c);
    if (piVar5 != *(int **)(DAT_004e2420 + 0x1c)) {
      do {
        FUN_00445030(param_1,piVar5[2]);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(DAT_004e2420 + 0x1c));
    }
    piVar5 = (int *)**(int **)(DAT_004e2420 + 0x28);
    if (piVar5 != *(int **)(DAT_004e2420 + 0x28)) {
      do {
        iVar3 = FUN_00441a80(iVar2,piVar5[2]);
        iVar4 = piVar5[2];
        bVar1 = FUN_0043dc50(*(int *)(*(int *)((int)param_1 + 0x18) + 0x50) + 0x270);
        if ((CONCAT31(extraout_var,bVar1) != 0) &&
           (iVar4 = FUN_00444c80(param_1,iVar4,iVar3), iVar4 != 0)) {
          FUN_004137d0(*(int *)((int)param_1 + 0x18));
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(DAT_004e2420 + 0x28));
    }
    FUN_004137d0(*(int *)((int)param_1 + 0x18));
  }
  return;
}

