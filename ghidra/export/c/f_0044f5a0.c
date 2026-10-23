// FUNCTION: PORT1111 0x0044f5a0
// name: FUN_0044f5a0
// sig: int FUN_0044f5a0(int param_1)


int __cdecl FUN_0044f5a0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -0x66;
  }
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x30) + 1, iVar1 != *(int *)(param_1 + 0x24))) {
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x6c) + 0x2e + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x30) = iVar1;
    iVar1 = FUN_0044f180((int *)(param_1 + 0x48),(int *)(param_1 + 0x98),0,0,0,0,0,0);
    *(uint *)(param_1 + 0x38) = (uint)(iVar1 == 0);
    return iVar1;
  }
  return -100;
}

