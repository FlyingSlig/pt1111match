// FUNCTION: PORT1111 0x004193f0
// name: FUN_004193f0
// sig: undefined FUN_004193f0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __cdecl FUN_004193f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -7;
    param_3 = param_3 + -7;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

