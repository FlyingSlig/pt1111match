// FUNCTION: PORT1111 0x0045c200
// name: FUN_0045c200
// sig: int FUN_0045c200(undefined * param_1)


int __cdecl FUN_0045c200(undefined *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar2 = 0;
  if (PTR_DAT_004dc438 != (undefined *)0x0) {
    ppuVar3 = &PTR_DAT_004dc438;
    do {
      if (ppuVar3[-1] == param_1) {
        return iVar2;
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  return -1;
}

