// FUNCTION: PORT1111 0x00403a90
// name: FUN_00403a90
// sig: undefined FUN_00403a90(int param_1)


void FUN_00403a90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &DAT_004d5318;
  while( true ) {
    if (*piVar2 == 0) {
      FUN_00417f40(param_1);
      return;
    }
    iVar1 = FUN_004662f0((void *)(param_1 + 4),(uchar *)piVar2[-2]);
    if (iVar1 != 0) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 6;
  }
  (*(code *)(&DAT_004d5318)[iVar3 * 6])(param_1);
  return;
}

