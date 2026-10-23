// FUNCTION: PORT1111 0x0047a6d0
// name: FUN_0047a6d0
// sig: undefined FUN_0047a6d0(int param_1)


void __fastcall FUN_0047a6d0(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 4);
  if (puVar2 != *(undefined4 **)(*(int *)(param_1 + 0x14) + 8)) {
    do {
      _Memory = (undefined4 *)*puVar2;
      if (_Memory != (undefined4 *)0x0) {
        FUN_0047bab0(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(*(int *)(param_1 + 0x14) + 8));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(void **)(iVar1 + 4) == (void *)0x0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar1 + 4));
}

