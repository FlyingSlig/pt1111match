// FUNCTION: PORT1111 0x0045c540
// name: FUN_0045c540
// sig: undefined4 FUN_0045c540(int param_1)


undefined4 FUN_0045c540(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0xd) && (*(int *)(param_1 + 8) != 6)) {
    return 0;
  }
  return 1;
}

