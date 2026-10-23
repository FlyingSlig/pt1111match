// FUNCTION: PORT1111 0x00421fa0
// name: FUN_00421fa0
// sig: undefined4 FUN_00421fa0(int param_1)


undefined4 __fastcall FUN_00421fa0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x5c));
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x1fc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1fc));
  }
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 0x20c) != (undefined4 *)0x0) {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x20c))(1);
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

