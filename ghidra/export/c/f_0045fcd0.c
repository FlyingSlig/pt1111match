// FUNCTION: PORT1111 0x0045fcd0
// name: FUN_0045fcd0
// sig: undefined4 FUN_0045fcd0(int param_1)


undefined4 __cdecl FUN_0045fcd0(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_004615e0(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,(int *)0x0);
    return 0;
  }
  return 0xfffffffe;
}

