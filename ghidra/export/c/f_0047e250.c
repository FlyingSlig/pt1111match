// FUNCTION: PORT1111 0x0047e250
// name: FUN_0047e250
// sig: undefined FUN_0047e250(int param_1)


void __fastcall FUN_0047e250(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}

