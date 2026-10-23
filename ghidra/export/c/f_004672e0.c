// FUNCTION: PORT1111 0x004672e0
// name: FUN_004672e0
// sig: undefined FUN_004672e0(int param_1)


void __fastcall FUN_004672e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x80))(*(int **)(param_1 + 0x2c),0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

