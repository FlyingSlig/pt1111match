// FUNCTION: PORT1111 0x004a1bbe
// name: FUN_004a1bbe
// sig: undefined FUN_004a1bbe(undefined4 * param_1)


void __cdecl FUN_004a1bbe(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if ((puVar1 != *(undefined **)PTR_PTR_004de57c) && (puVar1 != PTR_DAT_004de54c)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[1];
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 4)) && (puVar1 != PTR_DAT_004de550)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[2];
    if ((puVar1 != *(undefined **)(PTR_PTR_004de57c + 8)) && (puVar1 != PTR_DAT_004de554)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  return;
}

