// FUNCTION: PORT1111 0x00428050
// name: FUN_00428050
// sig: undefined FUN_00428050(void)


void FUN_00428050(void)

{
  int iVar1;
  
  FUN_00427ec0();
  iVar1 = 0;
  do {
    (&DAT_004e1f38)[iVar1] = (&DAT_004d6910)[iVar1] << 4;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return;
}

