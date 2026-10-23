// FUNCTION: PORT1111 0x00411c40
// name: FUN_00411c40
// sig: undefined FUN_00411c40(int param_1)


void __fastcall FUN_00411c40(int param_1)

{
  FUN_00417430(DAT_004e240c,param_1);
  FUN_004288e0(*(void **)(param_1 + 0x18),param_1);
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

