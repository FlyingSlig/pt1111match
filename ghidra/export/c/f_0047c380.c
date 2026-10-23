// FUNCTION: PORT1111 0x0047c380
// name: FUN_0047c380
// sig: undefined FUN_0047c380(int param_1)


void __fastcall FUN_0047c380(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(1);
    }
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

