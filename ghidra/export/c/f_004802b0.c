// FUNCTION: PORT1111 0x004802b0
// name: FUN_004802b0
// sig: undefined FUN_004802b0(int param_1)


void __fastcall FUN_004802b0(int param_1)

{
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x30))();
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

