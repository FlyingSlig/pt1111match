// FUNCTION: PORT1111 0x00435c30
// name: FUN_00435c30
// sig: undefined FUN_00435c30(undefined4 * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00435c30(undefined4 *param_1)

{
  if (DAT_004e21dc != param_1) {
    if (DAT_004e21dc != (undefined4 *)0x0) {
      *DAT_004e21e0 = DAT_004e21c8;
      DAT_004e21dc[2] = DAT_004e21e0;
      DAT_004e21dc[4] = DAT_004e21d0;
    }
    DAT_004e21d0 = param_1[4];
    DAT_004e21e0 = (undefined1 *)param_1[2];
    DAT_004e21e8 = *param_1;
    DAT_004e21dc = param_1;
    DAT_004e21c8 = *DAT_004e21e0;
    _DAT_004e21d4 = 1;
    DAT_004e31dc = DAT_004e21e0;
  }
  return;
}

