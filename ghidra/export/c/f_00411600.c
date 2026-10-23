// FUNCTION: PORT1111 0x00411600
// name: FUN_00411600
// sig: undefined FUN_00411600(int * param_1)


void __fastcall FUN_00411600(int *param_1)

{
  if ((int *)param_1[0x19] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x19] + 0x2c))();
    FUN_00489080();
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
    param_1[0x19] = 0;
  }
  if ((int *)param_1[0x1a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1a] + 0x2c))();
    FUN_00489080();
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
    param_1[0x1a] = 0;
  }
  FUN_004125f0(param_1);
  return;
}

