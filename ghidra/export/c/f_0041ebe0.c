// FUNCTION: PORT1111 0x0041ebe0
// name: FUN_0041ebe0
// sig: undefined FUN_0041ebe0(int param_1)


void __fastcall FUN_0041ebe0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x1c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00426b00(*(int *)(iVar1 + uVar2 * 4));
  }
  return;
}

