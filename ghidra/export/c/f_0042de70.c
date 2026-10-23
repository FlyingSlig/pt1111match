// FUNCTION: PORT1111 0x0042de70
// name: FUN_0042de70
// sig: undefined FUN_0042de70(int param_1, int param_2)


void FUN_0042de70(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if (param_2 != param_1) {
    local_8 = **(int **)(param_1 + 8) - **(int **)(param_2 + 8);
    local_4 = (*(int **)(param_1 + 8))[1] - (*(int **)(param_2 + 8))[1];
    if ((local_8 == -1) && (local_4 == -1)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      return;
    }
    if ((local_8 == 0) && (local_4 == -1)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
      return;
    }
    if ((local_8 == 1) && (local_4 == -1)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
      return;
    }
    if ((local_8 == 1) && (local_4 == 0)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
      return;
    }
    iVar1 = FUN_0042de50(&local_8,1,1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
      return;
    }
    iVar1 = FUN_0042de50(&local_8,0,1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20;
      return;
    }
    iVar1 = FUN_0042de50(&local_8,-1,1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40;
      return;
    }
    iVar1 = FUN_0042de50(&local_8,-1,0);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
    }
  }
  return;
}

