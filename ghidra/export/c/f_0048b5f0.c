// FUNCTION: PORT1111 0x0048b5f0
// name: FUN_0048b5f0
// sig: undefined FUN_0048b5f0(undefined4 * param_1, undefined4 * param_2, uint param_3, int param_4, int param_5, int param_6)


void __cdecl
FUN_0048b5f0(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,
            int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (0 < param_4) {
    do {
      puVar3 = param_2;
      puVar4 = param_1;
      for (uVar1 = param_3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + param_5);
      param_2 = (undefined4 *)((int)param_2 + param_6);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

