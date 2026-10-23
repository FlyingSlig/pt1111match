// FUNCTION: PORT1111 0x0046a5f0
// name: FUN_0046a5f0
// sig: undefined FUN_0046a5f0(int param_1)


void __fastcall FUN_0046a5f0(int param_1)

{
  FUN_00488a90(param_1 + 0x88);
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x30))();
  }
  if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x68))(1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 4))(1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(HICON *)(param_1 + 0x70) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0x70));
  }
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 8))(1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  FUN_004865b0((int *)(param_1 + 0x84));
  FUN_00484c40("GPEFrameWnd");
  FUN_00484c40("GPEPageWnd");
  FUN_0048b0a0();
  return;
}

