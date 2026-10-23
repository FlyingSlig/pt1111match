// FUNCTION: PORT1111 0x0044f550
// name: FUN_0044f550
// sig: int FUN_0044f550(int param_1)


int __cdecl FUN_0044f550(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -0x66;
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar1 = FUN_0044f180((int *)(param_1 + 0x48),(int *)(param_1 + 0x98),0,0,0,0,0,0);
  *(uint *)(param_1 + 0x38) = (uint)(iVar1 == 0);
  return iVar1;
}

