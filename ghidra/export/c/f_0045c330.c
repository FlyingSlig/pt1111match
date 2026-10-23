// FUNCTION: PORT1111 0x0045c330
// name: FUN_0045c330
// sig: undefined FUN_0045c330(void * this, undefined * param_1)


void __thiscall FUN_0045c330(void *this,undefined *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR_FUN_004c4a9c;
  iVar3 = 0;
  if (PTR_DAT_004dc438 != (undefined *)0x0) {
    ppuVar2 = &PTR_DAT_004dc438;
    do {
      if (ppuVar2[-1] == param_1) {
        *(int *)((int)this + 4) = iVar3;
        return;
      }
      ppuVar1 = ppuVar2 + 4;
      ppuVar2 = ppuVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  return;
}

