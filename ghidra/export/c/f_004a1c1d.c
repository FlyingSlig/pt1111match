// FUNCTION: PORT1111 0x004a1c1d
// name: FUN_004a1c1d
// sig: undefined FUN_004a1c1d(int param_1)


void __cdecl FUN_004a1c1d(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0xc)) && (puVar1 != PTR_DAT_004de558)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x10);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0x10)) && (puVar1 != PTR_DAT_004de55c)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x14);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0x14)) && (puVar1 != PTR_DAT_004de560)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x18);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0x18)) && (puVar1 != PTR_DAT_004de564)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x1c);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0x1c)) && (puVar1 != PTR_DAT_004de568)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x20);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0x20)) && (puVar1 != PTR_DAT_004de56c)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x24);
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 0x24)) && (puVar1 != PTR_DAT_004de570)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  return;
}

