// FUNCTION: PORT1111 0x00480320
// name: FUN_00480320
// sig: undefined FUN_00480320(undefined4 * param_1)


void __fastcall FUN_00480320(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6788;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 0x30))();
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[4])(1);
    }
    param_1[4] = 0;
  }
  if (param_1[9] != 0) {
    FUN_0047ce50(param_1[9]);
    param_1[9] = 0;
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

