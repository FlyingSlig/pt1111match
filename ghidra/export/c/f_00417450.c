// FUNCTION: PORT1111 0x00417450
// name: FUN_00417450
// sig: int FUN_00417450(int param_1)


int __fastcall FUN_00417450(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004748f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

