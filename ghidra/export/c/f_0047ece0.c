// FUNCTION: PORT1111 0x0047ece0
// name: FUN_0047ece0
// sig: undefined FUN_0047ece0(int param_1)


void __fastcall FUN_0047ece0(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  FUN_00466a40((void *)(param_1 + 0x30),"");
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  SetRectEmpty((LPRECT)(param_1 + 0x68));
  return;
}

