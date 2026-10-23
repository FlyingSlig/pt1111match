// FUNCTION: PORT1111 0x0041f886
// name: FUN_0041f886
// sig: undefined FUN_0041f886(int param_1)


void __cdecl FUN_0041f886(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  DVar4 = GetTickCount();
  if ((*(byte *)((int)*(void **)(DAT_004e240c + 0x34) + 0x2c) & 1) != 0) {
    FUN_00478c30(*(void **)(DAT_004e240c + 0x34),DVar4);
  }
  piVar7 = *(int **)(DAT_004e240c + 8);
  piVar2 = (int *)*piVar7;
  puVar8 = (undefined4 *)(DAT_004e240c + 8);
  while (piVar2 != piVar7) {
    iVar5 = (**(code **)(*(int *)piVar2[4] + 0x14))();
    if (iVar5 != 0) {
      pvVar6 = (void *)(**(code **)(*(int *)piVar2[4] + 4))();
      if ((*(byte *)((int)pvVar6 + 0x2c) & 1) != 0) {
        FUN_00478c30(pvVar6,DVar4);
      }
      if (*(int *)(piVar2[4] + 0xb4) != 0) {
        FUN_00405fa0(piVar2[4]);
      }
    }
    FUN_00413730((int *)&stack0x00000000);
    piVar7 = (int *)*puVar8;
  }
  piVar7 = *(int **)(DAT_004e240c + 0x20);
  piVar2 = (int *)*piVar7;
  puVar8 = (undefined4 *)(DAT_004e240c + 0x20);
  while (piVar2 != piVar7) {
    piVar7 = (int *)piVar2[4];
    if ((piVar7 != (int *)0x0) &&
       (pvVar6 = (void *)(**(code **)(*piVar7 + 4))(), (*(byte *)((int)pvVar6 + 0x2c) & 1) != 0)) {
      FUN_00478c30(pvVar6,DVar4);
    }
    FUN_00413730((int *)&stack0x00000000);
    piVar7 = (int *)*puVar8;
  }
  piVar7 = (int *)**(int **)(param_1 + 0x80);
  if (piVar7 != *(int **)(param_1 + 0x80)) {
    do {
      if ((*(byte *)(piVar7[3] + 0x2c) & 1) != 0) {
        FUN_00478c30((void *)piVar7[3],DVar4);
      }
      if (*(char *)((int)piVar7 + 0x11) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x11);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar3 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int **)(param_1 + 0x80));
  }
  piVar7 = (int *)**(int **)(DAT_004e240c + 0x2c);
  if (piVar7 != *(int **)(DAT_004e240c + 0x2c)) {
    do {
      if ((*(byte *)(piVar7[4] + 0x2c) & 1) != 0) {
        FUN_00478c30((void *)piVar7[4],DVar4);
      }
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x15);
            piVar3 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int **)(DAT_004e240c + 0x2c));
  }
  FUN_00474cc0(param_1);
  return;
}

