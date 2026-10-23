// FUNCTION: PORT1111 0x00419000
// name: FUN_00419000
// sig: undefined4 FUN_00419000(int param_1)


undefined4 __fastcall FUN_00419000(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x120) == 0) && (iVar2 = *(int *)(param_1 + 0x11c), iVar2 != 0)) {
    pvVar1 = operator_new(iVar2 * iVar2 * 4);
    *(void **)(param_1 + 0x120) = pvVar1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x11c) * *(int *)(param_1 + 0x11c)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x120) + iVar2 * 4) = 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x11c) * *(int *)(param_1 + 0x11c));
    }
  }
  return 1;
}

