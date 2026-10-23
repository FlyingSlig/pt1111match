// FUNCTION: PORT1111 0x00478330
// name: FUN_00478330
// sig: undefined4 FUN_00478330(int param_1)


undefined4 __fastcall FUN_00478330(int param_1)

{
  uint uVar1;
  
  if (((*(byte *)(param_1 + 0x2c) & 2) != 0) && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 & 0xffffffef;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x14))();
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x18))(0);
    } while ((*(byte *)(param_1 + 0x2c) & 1) != 0);
    *(uint *)(param_1 + 0x28) = uVar1;
    return 1;
  }
  return 0;
}

