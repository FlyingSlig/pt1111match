// FUNCTION: PORT1111 0x004a6430
// name: FUN_004a6430
// sig: undefined FUN_004a6430(int * param_1, int param_2, char * param_3, undefined1 param_4, undefined4 * param_5, uint param_6)


void __cdecl
FUN_004a6430(int *param_1,int param_2,char *param_3,undefined1 param_4,undefined4 *param_5,
            uint param_6)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != (char *)0x0)) &&
     (param_5 != (undefined4 *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar2 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = FUN_004a4710(param_1,~uVar4);
    uVar4 = 0xffffffff;
    do {
      pcVar6 = param_3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar7 = pcVar2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    puVar3 = FUN_004a4710(param_1,param_6);
    puVar8 = puVar3;
    for (uVar4 = param_6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *param_5;
      param_5 = param_5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = param_6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_5;
      param_5 = (undefined4 *)((int)param_5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004a6df0((int)param_1,param_2,0x10,0);
    *(uint *)(param_2 + 0xcc) = param_6;
    *(undefined1 *)(param_2 + 0xd0) = param_4;
    *(char **)(param_2 + 0xc4) = pcVar2;
    *(undefined4 **)(param_2 + 200) = puVar3;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x10;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
  }
  return;
}

