// FUNCTION: PORT1111 0x0048b4e0
// name: FUN_0048b4e0
// sig: undefined FUN_0048b4e0(undefined4 * param_1, undefined4 * param_2, uint param_3, int param_4, int param_5, int param_6)


void __cdecl
FUN_0048b4e0(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,
            int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_4) {
    do {
      puVar2 = param_2;
      puVar3 = param_1;
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + param_5);
      param_2 = (undefined4 *)((int)param_2 + param_6);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

