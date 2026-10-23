// FUNCTION: PORT1111 0x00480480
// name: FUN_00480480
// sig: undefined FUN_00480480(int param_1)


void __fastcall FUN_00480480(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    DAT_004e2b20[2] = 0;
    (**(code **)(*DAT_004e2b20 + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(void **)(param_1 + 0x24) != (void *)0x0) {
      FUN_0047d6a0(*(void **)(param_1 + 0x24));
      return;
    }
  }
  return;
}

