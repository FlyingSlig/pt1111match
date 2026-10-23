// FUNCTION: PORT1111 0x0042d150
// name: FUN_0042d150
// sig: int FUN_0042d150(int param_1)


int __fastcall FUN_0042d150(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    FUN_0042cfe0(param_1);
  }
  if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x18)) {
    do {
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar4 = *(int *)(param_1 + 4);
        iVar3 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x40) = 0;
        if (iVar3 < *(int *)(iVar4 + 0x10c)) {
          *(int *)(param_1 + 0x24) = iVar3;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        else {
          *(int *)(param_1 + 0x24) = *(int *)(iVar4 + 0x10c) + -1;
          *(int *)(param_1 + 0x28) = (iVar3 - *(int *)(iVar4 + 0x10c)) + 1;
        }
        if (iVar3 < *(int *)(iVar4 + 0x110)) {
          *(int *)(param_1 + 0x20) = iVar3;
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        else {
          *(int *)(param_1 + 0x20) = *(int *)(iVar4 + 0x110) + -1;
          *(int *)(param_1 + 0x1c) = (iVar3 - *(int *)(iVar4 + 0x110)) + 1;
        }
        iVar3 = *(int *)(param_1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x20);
        iVar2 = (*(int *)(param_1 + 0x38) - iVar3) + iVar1;
        *(int *)(param_1 + 0x30) = iVar1;
        *(int *)(param_1 + 0x2c) = iVar3;
        if (0 < iVar2) {
          iVar2 = iVar2 >> 1;
          *(int *)(param_1 + 0x2c) = iVar3 + iVar2;
          *(int *)(param_1 + 0x30) = iVar1 - iVar2;
        }
        iVar3 = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x24)) + *(int *)(param_1 + 0x28);
        if (iVar3 < 0) {
          *(int *)(param_1 + 0x24) = (iVar3 >> 1) + *(int *)(param_1 + 0x24);
        }
        if ((*(int *)(param_1 + 0x4c) != 0) &&
           (0 < (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x24)) + *(int *)(param_1 + 0x2c))) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        }
        if (*(int *)(iVar4 + 0x10c) <= *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x24) = *(int *)(iVar4 + 0x10c) + -1;
        }
      }
      iVar4 = *(int *)(param_1 + 0x2c);
      if ((((iVar4 <= *(int *)(param_1 + 0x24)) && (-1 < iVar4)) &&
          (iVar4 < *(int *)(*(int *)(param_1 + 4) + 0x10c))) &&
         ((-1 < *(int *)(param_1 + 0x30) &&
          (*(int *)(param_1 + 0x30) < *(int *)(*(int *)(param_1 + 4) + 0x110))))) {
        iVar4 = *(int *)(param_1 + 0x30);
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10c);
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x118);
        *(int *)(param_1 + 0x2c) = iVar1 + 1;
        *(int *)(param_1 + 0x30) = iVar4 + -1;
        return (iVar3 * iVar4 + iVar1) * 0x6c + iVar2;
      }
      iVar4 = *(int *)(param_1 + 0x34) + 1;
      *(int *)(param_1 + 0x34) = iVar4;
      *(undefined4 *)(param_1 + 0x40) = 1;
    } while (iVar4 <= *(int *)(param_1 + 0x18));
  }
  return 0;
}

