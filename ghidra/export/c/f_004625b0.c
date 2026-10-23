// FUNCTION: PORT1111 0x004625b0
// name: FUN_004625b0
// sig: undefined FUN_004625b0(int param_1)


void __cdecl FUN_004625b0(int param_1)

{
  FUN_00462620();
  *(int *)(param_1 + 0xb10) = param_1 + 0x8c;
  *(int *)(param_1 + 0xb28) = param_1 + 0xa74;
  *(undefined ***)(param_1 + 0xb18) = &PTR_DAT_004dc6a8;
  *(int *)(param_1 + 0xb1c) = param_1 + 0x980;
  *(undefined ***)(param_1 + 0xb24) = &PTR_DAT_004dc6c0;
  *(undefined **)(param_1 + 0xb30) = &DAT_004dc6d8;
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 8;
  FUN_00462630(param_1);
  return;
}

