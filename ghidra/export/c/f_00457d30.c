// FUNCTION: PORT1111 0x00457d30
// name: FUN_00457d30
// sig: undefined FUN_00457d30(int param_1)


void __fastcall FUN_00457d30(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  }
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + uVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

