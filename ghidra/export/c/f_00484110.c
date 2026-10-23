// FUNCTION: PORT1111 0x00484110
// name: FUN_00484110
// sig: undefined FUN_00484110(int param_1)


void __fastcall FUN_00484110(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x30))();
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

