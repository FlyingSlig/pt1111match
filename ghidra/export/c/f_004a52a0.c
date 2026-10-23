// FUNCTION: PORT1111 0x004a52a0
// name: FUN_004a52a0
// sig: undefined FUN_004a52a0(undefined4 * param_1, undefined4 * param_2)


void __cdecl FUN_004a52a0(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
  }
  if ((param_2 != (undefined4 *)0x0) && (pvVar1 = (void *)*param_2, pvVar1 != (void *)0x0)) {
    FUN_004a6df0((int)puVar2,(int)pvVar1,0x7fff,-1);
    if (puVar2[0x88] != 0) {
      FUN_004a4750((int)puVar2,(void *)puVar2[0x89]);
      puVar2[0x89] = 0;
      puVar2[0x88] = 0;
    }
    FUN_004a4700(pvVar1);
    *param_2 = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004a5330(puVar2);
    FUN_004a4700(puVar2);
    *param_1 = 0;
  }
  return;
}

