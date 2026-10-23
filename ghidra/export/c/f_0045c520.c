// FUNCTION: PORT1111 0x0045c520
// name: FUN_0045c520
// sig: undefined4 FUN_0045c520(int param_1)


undefined4 FUN_0045c520(int param_1)

{
  if ((*(int *)(param_1 + 8) != 7) && (*(int *)(param_1 + 8) != 0x12)) {
    return 0;
  }
  return 1;
}

