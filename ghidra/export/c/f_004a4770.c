// FUNCTION: PORT1111 0x004a4770
// name: FUN_004a4770
// sig: undefined4 * FUN_004a4770(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, uint param_4)


undefined4 * __cdecl
FUN_004a4770(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_2;
}

