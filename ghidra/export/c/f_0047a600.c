// FUNCTION: PORT1111 0x0047a600
// name: FUN_0047a600
// sig: undefined FUN_0047a600(int param_1)


void __fastcall FUN_0047a600(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0xc) + 0xc);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar1 + 0x40);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar1 + 0x42);
  }
  return;
}

