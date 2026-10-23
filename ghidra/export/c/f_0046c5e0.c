// FUNCTION: PORT1111 0x0046c5e0
// name: FUN_0046c5e0
// sig: undefined4 FUN_0046c5e0(int param_1)


undefined4 __fastcall FUN_0046c5e0(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar1 = _malloc(0x200);
    *(void **)(param_1 + 0x14) = pvVar1;
  }
  return *(undefined4 *)(param_1 + 0x14);
}

