// FUNCTION: PORT1111 0x00425c40
// name: FUN_00425c40
// sig: uint FUN_00425c40(int param_1)


uint FUN_00425c40(int param_1)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = &DAT_004d6858;
  while( true ) {
    if (*piVar3 == 0) {
      return in_EAX & 0xffffff00;
    }
    iVar1 = FUN_004662f0((void *)(param_1 + 4),(uchar *)piVar3[-2]);
    if (iVar1 != 0) break;
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 6;
    in_EAX = 0;
  }
  uVar2 = (*(code *)(&DAT_004d6858)[iVar4 * 6])(param_1);
  return uVar2;
}

