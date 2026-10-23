// FUNCTION: PORT1111 0x004a71b0
// name: FUN_004a71b0
// sig: undefined FUN_004a71b0(int param_1, int param_2)


void __cdecl FUN_004a71b0(int param_1,int param_2)

{
  FUN_004a6df0(param_1,param_2,0x7fff,-1);
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_004a4750(param_1,*(void **)(param_1 + 0x224));
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  FUN_004a6db0(&param_2,0x120);
  return;
}

