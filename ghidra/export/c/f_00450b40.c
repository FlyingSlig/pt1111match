// FUNCTION: PORT1111 0x00450b40
// name: FUN_00450b40
// sig: undefined4 FUN_00450b40(void)


undefined4 FUN_00450b40(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  byte *pbVar5;
  
  if ((*(int *)(unaff_ESI + 0x4090) != 0) && (*(int *)(unaff_ESI + 0x6c) != 0)) {
    pbVar5 = (byte *)(unaff_ESI + 0x88);
    do {
      uVar4 = *(uint *)(unaff_ESI + 0x409c) & 0xfffd | 2;
      uVar2 = *(uint *)(*(int *)(unaff_ESI + 0x40a0) +
                       (((uint)*pbVar5 ^ *(uint *)(unaff_ESI + 0x4094)) & 0xff) * 4) ^
              *(uint *)(unaff_ESI + 0x4094) >> 8;
      *(uint *)(unaff_ESI + 0x4094) = uVar2;
      uVar2 = ((uVar2 & 0xff) + *(int *)(unaff_ESI + 0x4098)) * 0x8088405 + 1;
      *(uint *)(unaff_ESI + 0x4098) = uVar2;
      *(uint *)(unaff_ESI + 0x409c) =
           *(uint *)(unaff_ESI + 0x409c) >> 8 ^
           *(uint *)(*(int *)(unaff_ESI + 0x40a0) +
                    ((uVar2 >> 0x18 ^ *(uint *)(unaff_ESI + 0x409c)) & 0xff) * 4);
      *pbVar5 = *pbVar5 ^ (byte)((uVar4 ^ 1) * uVar4 >> 8);
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 + (-0x88 - unaff_ESI) < *(byte **)(unaff_ESI + 0x6c));
  }
  iVar3 = (**(code **)(unaff_ESI + 8))
                    (*(undefined4 *)(unaff_ESI + 0x1c),*(undefined4 *)(unaff_ESI + 0x20),
                     unaff_ESI + 0x88,*(undefined4 *)(unaff_ESI + 0x6c));
  iVar1 = *(int *)(unaff_ESI + 0x6c);
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  if (iVar3 == iVar1) {
    return 0;
  }
  return 0xffffffff;
}

