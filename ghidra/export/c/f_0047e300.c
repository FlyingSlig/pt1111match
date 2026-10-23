// FUNCTION: PORT1111 0x0047e300
// name: FUN_0047e300
// sig: undefined FUN_0047e300(undefined4 * param_1)


void __fastcall FUN_0047e300(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_004c66d4;
  if ((param_1[3] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[3] = 1;
  if ((param_1[4] != 0) && ((undefined4 *)param_1[2] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  param_1[2] = 0;
  param_1[4] = 1;
  return;
}

