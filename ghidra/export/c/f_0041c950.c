// FUNCTION: PORT1111 0x0041c950
// name: FUN_0041c950
// sig: int FUN_0041c950(void)


int FUN_0041c950(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_004e26f0 + DAT_004e26fc * 4);
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0x1a8) + *(int *)(iVar1 + 0x44);
  }
  return 0;
}

