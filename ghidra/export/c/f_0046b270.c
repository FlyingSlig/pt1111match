// FUNCTION: PORT1111 0x0046b270
// name: FUN_0046b270
// sig: undefined4 FUN_0046b270(void)


undefined4 FUN_0046b270(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int unaff_EDI;
  int *piVar3;
  undefined4 uVar4;
  short sStack_40;
  undefined2 local_38;
  undefined2 uStack_36;
  int iStack_34;
  int iStack_30;
  ushort uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int iStack_24;
  int iStack_18;
  undefined4 *puStack_4;
  
  FUN_0048a070(unaff_EDI);
  sStack_40 = (short)&local_38;
  if (sStack_40 != 0x4d42) {
    return 0;
  }
  uVar4 = 0x28;
  piVar3 = &iStack_30;
  *puStack_4 = 0;
  FUN_0048a070(unaff_EDI);
  if (iStack_24 == 0) {
    iStack_24 = ((uint)uStack_2a * iStack_34 + 0x1f >> 3 & 0x1ffffffc) * iStack_30;
  }
  if ((iStack_18 == 0) && (uStack_2a < 9)) {
    iStack_18 = 1 << ((byte)uStack_2a & 0x1f);
  }
  if ((CONCAT22(uStack_26,uStack_28) == 3) && (iStack_18 == 3)) {
    iStack_18 = 0;
  }
  if (CONCAT22(uStack_36,local_38) != 0xc) {
    if ((uStack_2a == 0x10) && (CONCAT22(uStack_26,uStack_28) == 0)) {
      uStack_2a = 0xf;
    }
    iVar1 = (**(code **)(*unaff_ESI + 0x54))(uStack_2a,iStack_34,iStack_30,piVar3,uVar4);
    if (iVar1 != 0) {
      (**(code **)(*unaff_ESI + 0x60))(&stack0xffffffbc);
      iVar1 = CONCAT22(uStack_26,uStack_28);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      uVar4 = (**(code **)(*unaff_ESI + 0x18))
                        ((((CONCAT22(uStack_36,local_38) != 3) - 1 & 3) + iVar1) * 4);
      FUN_0048a070(unaff_EDI);
      uVar2 = (**(code **)(*unaff_ESI + 0x30))(uVar4);
      uVar4 = 0xe;
      FUN_0048a070(unaff_EDI);
      (**(code **)(*unaff_ESI + 0x34))(uVar2,uVar4);
      return 1;
    }
  }
  return 0;
}

