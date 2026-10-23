// FUNCTION: PORT1111 0x004a6740
// name: FUN_004a6740
// sig: undefined FUN_004a6740(int * param_1, int param_2, undefined4 * param_3, uint param_4, undefined4 * param_5)


void __cdecl
FUN_004a6740(int *param_1,int param_2,undefined4 *param_3,uint param_4,undefined4 *param_5)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      FUN_004a6df0((int)param_1,param_2,0x2000,0);
      pvVar1 = FUN_004a4710(param_1,param_4);
      *(void **)(param_2 + 0x4c) = pvVar1;
      param_1[0x62] = (int)pvVar1;
      puVar3 = *(undefined4 **)(param_2 + 0x4c);
      for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x2000;
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x50) = *param_5;
      *(undefined4 *)(param_2 + 0x54) = param_5[1];
      *(undefined2 *)(param_2 + 0x58) = *(undefined2 *)(param_5 + 2);
      if (param_4 == 0) {
        param_4 = 1;
      }
    }
    *(short *)(param_2 + 0x16) = (short)param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  }
  return;
}

