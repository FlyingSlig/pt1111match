// FUNCTION: PORT1111 0x0042a330
// name: FUN_0042a330
// sig: undefined FUN_0042a330(void)


void FUN_0042a330(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_00428f60(0x4e20c8);
  iVar1 = 0;
  for (piVar2 = DAT_004e2158; piVar2 != DAT_004e215c; piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *(int *)(*piVar2 + 0x18) * *(int *)(*piVar2 + 0x14);
  }
  FUN_00428ed0(&DAT_004e20c8,iVar1);
  piVar2 = DAT_004e2158;
  if (DAT_004e2158 != DAT_004e215c) {
    do {
      FUN_00426560(*piVar2);
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_004e215c);
  }
  return;
}

