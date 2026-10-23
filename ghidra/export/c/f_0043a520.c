// FUNCTION: PORT1111 0x0043a520
// name: FUN_0043a520
// sig: undefined4 FUN_0043a520(int param_1)


undefined4 __fastcall FUN_0043a520(int param_1)

{
  undefined4 in_EAX;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    in_EAX = (**(code **)(**(int **)(param_1 + 0x10) + 8))(1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

