// FUNCTION: PORT1111 0x004a6db0
// name: FUN_004a6db0
// sig: undefined FUN_004a6db0(undefined4 * param_1, uint param_2)


void __cdecl FUN_004a6db0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (param_2 < 0x120) {
    FUN_004a4700(puVar1);
    puVar1 = FUN_004a46b0(2);
    *param_1 = puVar1;
  }
  for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}

