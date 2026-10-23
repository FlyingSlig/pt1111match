// FUNCTION: PORT1111 0x00435d30
// name: FUN_00435d30
// sig: undefined4 * FUN_00435d30(int param_1, uint param_2)


undefined4 * __cdecl FUN_00435d30(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (((1 < param_2) && (*(char *)(param_1 + -2 + param_2) == '\0')) &&
     (*(char *)(param_1 + -1 + param_2) == '\0')) {
    puVar1 = _malloc(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_00435c10();
      return puVar1;
    }
    puVar1[3] = param_2 - 2;
    puVar1[1] = param_1;
    puVar1[2] = param_1;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[4] = param_2 - 2;
    puVar1[6] = 0;
    puVar1[7] = 1;
    puVar1[8] = 0;
    puVar1[9] = 0;
    FUN_00435c30(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

