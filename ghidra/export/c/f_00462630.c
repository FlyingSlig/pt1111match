// FUNCTION: PORT1111 0x00462630
// name: FUN_00462630
// sig: undefined FUN_00462630(int param_1)


void __cdecl FUN_00462630(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x11e;
  puVar1 = (undefined2 *)(param_1 + 0x8c);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x980);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xa74);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x16a4) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x1698) = 0;
  *(undefined2 *)(param_1 + 0x48c) = 1;
  return;
}

