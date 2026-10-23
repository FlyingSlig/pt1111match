// FUNCTION: PORT1111 0x00441890
// name: FUN_00441890
// sig: undefined FUN_00441890(int param_1)


void __fastcall FUN_00441890(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = DAT_004e2404;
  if (*(int *)(DAT_004e2404 + 0x110) != 0) {
    do {
      uVar2 = *(uint *)(iVar1 + 0x10c);
      uVar3 = 0;
      if (uVar2 != 0) {
        do {
          iVar1 = FUN_00426730((uVar2 * uVar4 + uVar3) * 0x6c + *(int *)(iVar1 + 0x118));
          if (*(char *)(iVar1 + 0x2e) != '\0') {
            FUN_00444020(*(void **)(param_1 + 8),uVar3,uVar4,0x14,1);
          }
          uVar2 = *(uint *)(DAT_004e2404 + 0x10c);
          uVar3 = uVar3 + 1;
          iVar1 = DAT_004e2404;
        } while (uVar3 < uVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar1 + 0x110));
  }
  return;
}

