// FUNCTION: PORT1111 0x00428080
// name: FUN_00428080
// sig: undefined4 * FUN_00428080(int param_1)


undefined4 * __fastcall FUN_00428080(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = *(int *)(param_1 + 8), iVar1 - *(int *)(param_1 + 4) >> 2 != 0)) {
    puVar2 = *(undefined4 **)(iVar1 + -4);
    *(int *)(param_1 + 8) = iVar1 + -4;
    return puVar2;
  }
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

