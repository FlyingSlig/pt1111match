// FUNCTION: PORT1111 0x0042a3b0
// name: FUN_0042a3b0
// sig: undefined4 FUN_0042a3b0(undefined4 * param_1, uint * param_2)


undefined4 __cdecl FUN_0042a3b0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (DAT_004e2168 != 0 && (uVar2 < (uint)(DAT_004e216c - DAT_004e2168 >> 2)));
      uVar2 = uVar2 + 1) {
    iVar1 = FUN_004663a0((void *)(*(int *)(DAT_004e2168 + uVar2 * 4) + 4),param_1);
    if (iVar1 != 0) {
      *param_2 = uVar2;
      return 1;
    }
  }
  return 0;
}

