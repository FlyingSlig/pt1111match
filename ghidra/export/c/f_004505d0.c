// FUNCTION: PORT1111 0x004505d0
// name: FUN_004505d0
// sig: undefined4 FUN_004505d0(undefined4 * param_1, int param_2, uint param_3)


undefined4 __cdecl FUN_004505d0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffff98;
  }
  if (param_1[1] == 0) {
    puVar1 = _malloc(0x1000);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[1] = 0xff0;
    }
    param_1[1] = puVar1;
    *param_1 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffff98;
    }
  }
  puVar1 = (undefined4 *)param_1[1];
  do {
    if (param_3 == 0) {
      return 0;
    }
    puVar2 = puVar1;
    if (puVar1[1] == 0) {
      puVar2 = _malloc(0x1000);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[2] = 0;
        puVar2[1] = 0xff0;
      }
      *puVar1 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return 0xffffff98;
      }
      param_1[1] = puVar2;
    }
    uVar3 = puVar2[1];
    if (param_3 <= (uint)puVar2[1]) {
      uVar3 = param_3;
    }
    puVar4 = (undefined1 *)(puVar2[2] + 0x10 + (int)puVar2);
    if (uVar3 != 0) {
      iVar6 = param_2 - (int)puVar4;
      uVar5 = uVar3;
      do {
        *puVar4 = puVar4[iVar6];
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
    puVar2[2] = puVar2[2] + uVar3;
    puVar2[1] = puVar2[1] - uVar3;
    puVar1 = puVar2;
  } while( true );
}

