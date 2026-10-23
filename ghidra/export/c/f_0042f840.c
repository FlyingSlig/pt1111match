// FUNCTION: PORT1111 0x0042f840
// name: FUN_0042f840
// sig: undefined FUN_0042f840(int param_1)


void __fastcall FUN_0042f840(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x1c) + 4) = 0xffffffff;
    FUN_00405ad0(*(void **)(param_1 + 0x40),-1,-1);
  }
  return;
}

