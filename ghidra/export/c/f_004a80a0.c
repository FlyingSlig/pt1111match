// FUNCTION: PORT1111 0x004a80a0
// name: FUN_004a80a0
// sig: undefined FUN_004a80a0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __cdecl FUN_004a80a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  pvVar2 = (void *)0x0;
  pvVar1 = (void *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    pvVar2 = (void *)*param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    pvVar1 = (void *)*param_3;
  }
  FUN_004a8140(puVar3,(int)pvVar2,(int)pvVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_004a6df0((int)puVar3,(int)pvVar2,0x4000,-1);
    FUN_004a4700(pvVar2);
    *param_2 = 0;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_004a6df0((int)puVar3,(int)pvVar1,0x4000,-1);
    FUN_004a4700(pvVar1);
    *param_3 = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_004a4700(puVar3);
    *param_1 = 0;
  }
  return;
}

