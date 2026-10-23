// FUNCTION: PORT1111 0x00486830
// name: FUN_00486830
// sig: undefined4 FUN_00486830(int param_1)


undefined4 __fastcall FUN_00486830(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0xc) + uVar2 * 8) != 0) {
        local_4 = 0;
        piVar1 = *(int **)(*(int *)(param_1 + 0xc) + uVar2 * 8);
        (**(code **)(*piVar1 + 0x24))(piVar1,&local_4);
        if ((local_4 & 1) != 0) {
          return 1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  return 0;
}

