// FUNCTION: PORT1111 0x00467290
// name: FUN_00467290
// sig: uint FUN_00467290(int param_1)


uint __fastcall FUN_00467290(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [4];
  uint uStack_78;
  
  puVar2 = local_88;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_88[0] = 0x7c;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 100))(*(int **)(param_1 + 0x2c),0,local_88,1,0);
  *(int *)(param_1 + 0x28) = iVar1;
  return uStack_78 & (iVar1 < 0) - 1;
}

