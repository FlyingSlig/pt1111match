// FUNCTION: PORT1111 0x0041eca0
// name: FUN_0041eca0
// sig: undefined FUN_0041eca0(int param_1)


void __fastcall FUN_0041eca0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x1c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
      FUN_00427480(*(int *)(iVar1 + uVar2 * 4));
    }
  }
  return;
}

