// FUNCTION: PORT1111 0x00424dd0
// name: FUN_00424dd0
// sig: undefined1 FUN_00424dd0(void)


undefined1 FUN_00424dd0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_004d6450)[uVar1] == 0xff) {
      FUN_00424b00(uVar1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x100);
  return 1;
}

