// FUNCTION: PORT1111 0x0045c4f0
// name: FUN_0045c4f0
// sig: undefined4 FUN_0045c4f0(int param_1)


undefined4 FUN_0045c4f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != 4) && (iVar1 != 0x12)) && (iVar1 != 0x15)) && (iVar1 != 0xf)) {
    return 0;
  }
  return 1;
}

