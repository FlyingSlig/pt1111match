// FUNCTION: PORT1111 0x00488cd0
// name: FUN_00488cd0
// sig: undefined FUN_00488cd0(int param_1)


void __fastcall FUN_00488cd0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x830) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x830))(1);
  }
  if (*(undefined4 **)(param_1 + 0x834) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x834))(1);
  }
  *(undefined4 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x834) = 0;
  return;
}

