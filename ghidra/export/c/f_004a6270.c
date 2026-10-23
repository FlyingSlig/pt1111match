// FUNCTION: PORT1111 0x004a6270
// name: FUN_004a6270
// sig: undefined FUN_004a6270(int * param_1, int param_2, undefined4 * param_3, int param_4)


void __cdecl FUN_004a6270(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    FUN_004a6df0((int)param_1,param_2,0x1000,0);
    puVar1 = FUN_004a6c70(param_1,param_4,3);
    param_1[0x45] = (int)puVar1;
    for (uVar2 = (uint)(param_4 * 3) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_3;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar2 = param_4 * 3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(int *)(param_2 + 0x10) = param_1[0x45];
    *(short *)(param_1 + 0x46) = (short)param_4;
    *(short *)(param_2 + 0x14) = (short)param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x1000;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
  }
  return;
}

