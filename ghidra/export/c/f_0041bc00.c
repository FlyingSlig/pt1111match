// FUNCTION: PORT1111 0x0041bc00
// name: FUN_0041bc00
// sig: undefined4 FUN_0041bc00(int param_1)


undefined4 __fastcall FUN_0041bc00(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x58) == 0) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) {
    pvVar1 = operator_new(iVar2 * iVar2 * 4);
    *(void **)(param_1 + 0x58) = pvVar1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x54)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar2 * 4) = 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x54));
    }
  }
  return 1;
}

