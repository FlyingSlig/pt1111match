// FUNCTION: PORT1111 0x00435a50
// name: FUN_00435a50
// sig: undefined FUN_00435a50(void)


void FUN_00435a50(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  
  iVar1 = DAT_004e21e4;
  for (pbVar5 = DAT_004e31dc; pbVar5 < DAT_004e21e0; pbVar5 = pbVar5 + 1) {
    if (*pbVar5 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = (&DAT_004d6b20)[(uint)*pbVar5 * 4];
    }
    iVar2 = iVar1 * 2;
    if (*(short *)(&DAT_004d6ac0 + iVar2) != 0) {
      DAT_004e21cc = pbVar5;
      DAT_004e21d8 = iVar1;
    }
    uVar3 = (uint)bVar4;
    if (*(short *)(&DAT_004d7138 + ((int)*(short *)(&DAT_004d6f88 + iVar2) + uVar3) * 2) != iVar1) {
      do {
        iVar1 = (int)*(short *)(&DAT_004d6ff0 + iVar2);
        if (0x2c < iVar1) {
          bVar4 = (&DAT_004d6f20)[uVar3 * 4];
        }
        iVar2 = iVar1 * 2;
        uVar3 = (uint)bVar4;
      } while (*(short *)(&DAT_004d7138 + ((int)*(short *)(&DAT_004d6f88 + iVar2) + uVar3) * 2) !=
               iVar1);
    }
    iVar1 = (int)*(short *)(&DAT_004d7058 +
                           ((int)*(short *)(&DAT_004d6f88 + iVar1 * 2) + (uint)bVar4) * 2);
  }
  return;
}

