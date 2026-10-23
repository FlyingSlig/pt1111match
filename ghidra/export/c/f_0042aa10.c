// FUNCTION: PORT1111 0x0042aa10
// name: FUN_0042aa10
// sig: undefined4 FUN_0042aa10(void)


undefined4 FUN_0042aa10(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_004e216c;
  iVar2 = DAT_004e2168;
  if (DAT_004e2168 != DAT_004e216c) {
    do {
      if (*(int **)(iVar1 + -4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + -4) + 0x14))(1);
        iVar1 = DAT_004e216c;
        iVar2 = DAT_004e2168;
      }
      if ((iVar2 != 0) && (iVar1 - iVar2 >> 2 != 0)) {
        iVar1 = iVar1 + -4;
        DAT_004e216c = iVar1;
      }
    } while (iVar2 != iVar1);
  }
  iVar1 = DAT_004e215c;
  iVar2 = DAT_004e2158;
  if (DAT_004e2158 != DAT_004e215c) {
    do {
      if (*(int **)(iVar1 + -4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + -4) + 0x14))(1);
        iVar1 = DAT_004e215c;
        iVar2 = DAT_004e2158;
      }
      if ((iVar2 != 0) && (iVar1 - iVar2 >> 2 != 0)) {
        iVar1 = iVar1 + -4;
        DAT_004e215c = iVar1;
      }
    } while (iVar2 != iVar1);
  }
  FUN_00436780(0x4e25f8);
  return 1;
}

