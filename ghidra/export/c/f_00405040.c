// FUNCTION: PORT1111 0x00405040
// name: FUN_00405040
// sig: undefined FUN_00405040(int * param_1)


void __fastcall FUN_00405040(int *param_1)

{
  FUN_004173c0(DAT_004e240c,param_1);
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2c])(1);
    param_1[0x2c] = 0;
  }
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 0x10))();
  }
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 0xc))(1);
    param_1[0x18] = 0;
  }
  FUN_00489080();
  return;
}

