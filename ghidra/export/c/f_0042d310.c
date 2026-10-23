// FUNCTION: PORT1111 0x0042d310
// name: FUN_0042d310
// sig: undefined4 FUN_0042d310(int param_1)


undefined4 __fastcall FUN_0042d310(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14) >> 4) *
            (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) >> 5);
    *(int *)(param_1 + 0x78) = iVar1 + 1;
    pvVar2 = operator_new(iVar1 * 4 + 4);
    *(void **)(param_1 + 0x6c) = pvVar2;
    FUN_0042d2c0(param_1);
    return *(undefined4 *)(param_1 + 0x6c);
  }
  if (((*(int *)(param_1 + 0x70) != DAT_004e2c30) || (*(int *)(param_1 + 0x74) != DAT_004e2c34)) ||
     (*(int *)(param_1 + 0x54) == 0)) {
    FUN_0042d2c0(param_1);
  }
  return *(undefined4 *)(param_1 + 0x6c);
}

