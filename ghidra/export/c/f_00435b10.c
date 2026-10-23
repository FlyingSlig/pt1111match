// FUNCTION: PORT1111 0x00435b10
// name: FUN_00435b10
// sig: uint FUN_00435b10(void)


uint FUN_00435b10(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  iVar1 = in_EAX * 2;
  uVar2 = 1;
  if (*(short *)(&DAT_004d6ac0 + iVar1) != 0) {
    DAT_004e21cc = DAT_004e21e0;
    DAT_004e21d8 = in_EAX;
  }
  if (*(short *)(&DAT_004d713a + *(short *)(&DAT_004d6f88 + iVar1) * 2) != in_EAX) {
    do {
      in_EAX = (int)*(short *)(&DAT_004d6ff0 + iVar1);
      if (0x2c < in_EAX) {
        uVar2 = (uint)(byte)(&DAT_004d6f20)[uVar2 * 4];
      }
      iVar1 = in_EAX * 2;
    } while (*(short *)(&DAT_004d7138 + ((int)*(short *)(&DAT_004d6f88 + iVar1) + uVar2) * 2) !=
             in_EAX);
  }
  return (int)*(short *)(&DAT_004d7058 + ((int)*(short *)(&DAT_004d6f88 + in_EAX * 2) + uVar2) * 2)
         & ((int)*(short *)(&DAT_004d7058 +
                           ((int)*(short *)(&DAT_004d6f88 + in_EAX * 2) + uVar2) * 2) == 0x2c) - 1;
}

