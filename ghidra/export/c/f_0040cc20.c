// FUNCTION: PORT1111 0x0040cc20
// name: FUN_0040cc20
// sig: undefined FUN_0040cc20(int param_1)


void __fastcall FUN_0040cc20(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x124) = 0;
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x120) != 0) {
    FUN_004789b0(*(void **)(param_1 + 0x58),(int *)0x0);
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x120) = 0;
  }
  return;
}

