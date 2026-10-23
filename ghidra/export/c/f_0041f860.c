// FUNCTION: PORT1111 0x0041f860
// name: FUN_0041f860
// sig: undefined FUN_0041f860(int param_1)


void __fastcall FUN_0041f860(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  DWORD DVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int iStack_8;
  int local_4;
  
  if (DAT_004e2c58 == 0) {
    local_4 = param_1;
    if (DAT_004e2404 == 0) {
      FUN_00474cc0(param_1);
      return;
    }
    DVar5 = GetTickCount();
    if ((*(byte *)((int)*(void **)(DAT_004e240c + 0x34) + 0x2c) & 1) != 0) {
      FUN_00478c30(*(void **)(DAT_004e240c + 0x34),DVar5);
    }
    iStack_8 = **(int **)(DAT_004e240c + 8);
    piVar8 = (int *)(DAT_004e240c + 8);
    if ((int *)iStack_8 != *(int **)(DAT_004e240c + 8)) {
      do {
        iVar2 = iStack_8;
        iVar6 = (**(code **)(**(int **)(iStack_8 + 0x10) + 0x14))();
        if (iVar6 != 0) {
          pvVar7 = (void *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))();
          if ((*(byte *)((int)pvVar7 + 0x2c) & 1) != 0) {
            FUN_00478c30(pvVar7,DVar5);
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (*(int *)(iVar2 + 0xb4) != 0) {
            FUN_00405fa0(iVar2);
          }
        }
        FUN_00413730(&iStack_8);
      } while (iStack_8 != *piVar8);
    }
    iStack_8 = **(int **)(DAT_004e240c + 0x20);
    piVar8 = (int *)(DAT_004e240c + 0x20);
    if ((int *)iStack_8 != *(int **)(DAT_004e240c + 0x20)) {
      do {
        if ((*(int **)(iStack_8 + 0x10) != (int *)0x0) &&
           (pvVar7 = (void *)(**(code **)(**(int **)(iStack_8 + 0x10) + 4))(),
           (*(byte *)((int)pvVar7 + 0x2c) & 1) != 0)) {
          FUN_00478c30(pvVar7,DVar5);
        }
        FUN_00413730(&iStack_8);
      } while (iStack_8 != *piVar8);
    }
    iVar2 = local_4;
    piVar8 = (int *)**(int **)(local_4 + 0x80);
    if (piVar8 != *(int **)(local_4 + 0x80)) {
      do {
        if ((*(byte *)(piVar8[3] + 0x2c) & 1) != 0) {
          FUN_00478c30((void *)piVar8[3],DVar5);
        }
        if (*(char *)((int)piVar8 + 0x11) == '\0') {
          piVar3 = (int *)piVar8[2];
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar8 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x11);
              piVar8 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x11);
            piVar4 = (int *)piVar8[1];
            piVar3 = piVar8;
            while ((piVar8 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x11);
              piVar4 = (int *)piVar8[1];
              piVar3 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int **)(iVar2 + 0x80));
    }
    piVar8 = (int *)**(int **)(DAT_004e240c + 0x2c);
    if (piVar8 != *(int **)(DAT_004e240c + 0x2c)) {
      do {
        if ((*(byte *)(piVar8[4] + 0x2c) & 1) != 0) {
          FUN_00478c30((void *)piVar8[4],DVar5);
        }
        if (*(char *)((int)piVar8 + 0x15) == '\0') {
          piVar3 = (int *)piVar8[2];
          if (*(char *)((int)piVar3 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar8 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x15);
              piVar8 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x15);
            piVar4 = (int *)piVar8[1];
            piVar3 = piVar8;
            while ((piVar8 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x15);
              piVar4 = (int *)piVar8[1];
              piVar3 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int **)(DAT_004e240c + 0x2c));
    }
    FUN_00474cc0(iVar2);
  }
  return;
}

