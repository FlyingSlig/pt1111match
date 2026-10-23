// FUNCTION: PORT1111 0x004681b0
// name: FUN_004681b0
// sig: undefined FUN_004681b0(int param_1)


void __fastcall FUN_004681b0(int param_1)

{
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
    FUN_00476e50(*(int **)(param_1 + 0xf8));
    if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x10))(1);
    }
  }
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

