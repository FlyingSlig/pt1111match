// FUNCTION: PORT1111 0x0041f250
// name: FUN_0041f250
// sig: undefined FUN_0041f250(int param_1)


void FUN_0041f250(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  if (DAT_004e2404 == 0) {
    FUN_00474610();
    return;
  }
  if (param_1 == 1) {
    piVar2 = *(int **)(DAT_004e2b14 + 0x5c);
    FUN_0042ab00(DAT_004e2404);
    puVar3 = (undefined4 *)FUN_0042d310(*(int *)(DAT_004e2404 + 0x10));
    pvVar4 = (void *)*puVar3;
    if (DAT_004e2681 == '\0') {
      while (pvVar4 != (void *)0x0) {
        if (*(int *)((int)pvVar4 + 0x44) != 0) {
          FUN_00426960(pvVar4,piVar2);
        }
        puVar1 = puVar3 + 1;
        puVar3 = puVar3 + 1;
        pvVar4 = (void *)*puVar1;
      }
    }
    else {
      while (pvVar4 != (void *)0x0) {
        if (*(int *)((int)pvVar4 + 0x44) != 0) {
          FUN_004270d0(pvVar4,piVar2);
        }
        puVar1 = puVar3 + 1;
        puVar3 = puVar3 + 1;
        pvVar4 = (void *)*puVar1;
      }
    }
    FUN_0042c050(DAT_004e2404);
  }
  else if ((param_1 == 10) && (DAT_004e2681 != '\0')) {
    piVar2 = (int *)FUN_0042d310(*(int *)(DAT_004e2404 + 0x10));
    pvVar4 = (void *)*piVar2;
    if (pvVar4 != (void *)0x0) {
      do {
        FUN_00426810(pvVar4,*(int **)(DAT_004e2b14 + 0x5c));
        pvVar4 = (void *)piVar2[1];
        piVar2 = piVar2 + 1;
      } while (pvVar4 != (void *)0x0);
      FUN_00474610();
      return;
    }
  }
  FUN_00474610();
  return;
}

