// FUNCTION: PORT1111 0x00470160
// name: FUN_00470160
// sig: undefined FUN_00470160(int param_1)


void __fastcall FUN_00470160(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  FUN_00465e40((undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0xec) = 0x6a;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xac);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0048a340((undefined4 *)(param_1 + 0xac),"Arial",8);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0x810;
  return;
}

