// FUNCTION: PORT1111 0x00404500
// name: FUN_00404500
// sig: undefined FUN_00404500(int param_1)


void __fastcall FUN_00404500(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004765a0(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(*(int *)(param_1 + 4) + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

