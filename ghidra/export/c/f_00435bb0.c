// FUNCTION: PORT1111 0x00435bb0
// name: FUN_00435bb0
// sig: undefined FUN_00435bb0(undefined4 * param_1)


void __cdecl FUN_00435bb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[4] = 0;
    *(undefined1 *)param_1[1] = 0;
    *(undefined1 *)(param_1[1] + 1) = 0;
    param_1[9] = 0;
    puVar1 = DAT_004e21dc;
    bVar2 = param_1 == DAT_004e21dc;
    param_1[2] = param_1[1];
    param_1[7] = 1;
    if (bVar2) {
      DAT_004e21d0 = puVar1[4];
      DAT_004e21e0 = (undefined1 *)puVar1[2];
      DAT_004e21e8 = *puVar1;
      DAT_004e21c8 = *DAT_004e21e0;
      DAT_004e31dc = DAT_004e21e0;
    }
  }
  return;
}

