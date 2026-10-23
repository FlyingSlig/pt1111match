// FUNCTION: PORT1111 0x004788b0
// name: FUN_004788b0
// sig: undefined FUN_004788b0(int param_1)


void __fastcall FUN_004788b0(int param_1)

{
  int local_4;
  
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && ((*(byte *)(param_1 + 0x2c) & 2) != 0)) {
    local_4 = param_1;
    FUN_0047a390(param_1);
    if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x30))(param_1);
    }
    local_4 = **(int **)(param_1 + 0x3c);
    if ((int *)local_4 != *(int **)(param_1 + 0x3c)) {
      do {
        FUN_004788b0(*(int *)(local_4 + 0xc));
        FUN_0040ca50(&local_4);
      } while (local_4 != *(int *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_0047a390(*(int *)(param_1 + 0x60));
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_0047a390(*(int *)(param_1 + 0x5c));
    }
  }
  return;
}

