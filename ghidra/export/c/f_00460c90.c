// FUNCTION: PORT1111 0x00460c90
// name: FUN_00460c90
// sig: uint FUN_00460c90(int * param_1, undefined4 * param_2, uint param_3)


uint __cdecl FUN_00460c90(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if (param_3 < uVar1) {
    uVar2 = param_3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  param_1[1] = uVar1 - uVar2;
  if (*(int *)(param_1[7] + 0x18) == 0) {
    uVar1 = FUN_00462450(param_1[0xc],(byte *)*param_1,uVar2);
    param_1[0xc] = uVar1;
  }
  puVar3 = (undefined4 *)*param_1;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *param_1 = *param_1 + uVar2;
  param_1[2] = param_1[2] + uVar2;
  return uVar2;
}

