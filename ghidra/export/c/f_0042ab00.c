// FUNCTION: PORT1111 0x0042ab00
// name: FUN_0042ab00
// sig: undefined FUN_0042ab00(int param_1)


void __fastcall FUN_0042ab00(int param_1)

{
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0)) {
    while ((*(int *)(param_1 + 0x60) != 0 &&
           (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0))) {
      FUN_00427690(*(int *)(*(int *)(param_1 + 100) + -4));
      if ((*(int *)(param_1 + 0x60) != 0) &&
         (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0)) {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -4;
      }
    }
  }
  return;
}

