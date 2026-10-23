// FUNCTION: PORT1111 0x00496800
// name: FUN_00496800
// sig: int FUN_00496800(int param_1)


int __fastcall FUN_00496800(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    return -0x7fffbffd;
  }
  while( true ) {
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10),0,0);
    }
    else {
      if (*(int *)(param_1 + 0x38) != 0) {
        return 0;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                        (*(int **)(param_1 + 0x10),param_1 + 0x20,*(undefined4 *)(param_1 + 0x14),0,
                         0x1000000,0);
    }
    if (iVar1 == -0x7789fe3e) break;
    if (iVar1 != -0x7789fde4) {
      return iVar1;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x6c))(*(int **)(param_1 + 0x10));
  return -0x7789fe3e;
}

