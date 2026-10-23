// FUNCTION: PORT1111 0x004893a0
// name: FUN_004893a0
// sig: undefined FUN_004893a0(int param_1)


void __fastcall FUN_004893a0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x838) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x838))(1);
    *(undefined4 *)(param_1 + 0x838) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x84c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x84c))(1);
    *(undefined4 *)(param_1 + 0x84c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x834) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x834))(1);
    *(undefined4 *)(param_1 + 0x834) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x830) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x830))(1);
    *(undefined4 *)(param_1 + 0x830) = 0;
  }
  *(undefined4 *)(param_1 + 0x810) = 0;
  return;
}

