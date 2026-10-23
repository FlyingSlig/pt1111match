// FUNCTION: PORT1111 0x00435db0
// name: FUN_00435db0
// sig: undefined FUN_00435db0(int param_1, int param_2)


void __cdecl FUN_00435db0(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar1 = _malloc(param_2 + 2U);
  if (puVar1 == (undefined1 *)0x0) {
    FUN_00435c10();
    return;
  }
  if (0 < param_2) {
    puVar3 = puVar1;
    iVar4 = param_2;
    do {
      *puVar3 = puVar3[param_1 - (int)puVar1];
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1[param_2 + 1] = 0;
  puVar1[param_2] = 0;
  puVar2 = FUN_00435d30((int)puVar1,param_2 + 2U);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[5] = 1;
    return;
  }
  FUN_00435c10();
  return;
}

