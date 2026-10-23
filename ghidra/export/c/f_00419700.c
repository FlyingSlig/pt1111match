// FUNCTION: PORT1111 0x00419700
// name: FUN_00419700
// sig: undefined4 FUN_00419700(int param_1)


undefined4 __fastcall FUN_00419700(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0x188) == 0) ||
       ((uint)((*(int *)(param_1 + 0x18c) - *(int *)(param_1 + 0x188)) / 0xc) <= uVar4)) {
      return 1;
    }
    iVar3 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00475080(iVar3);
    if (iVar3 == 0) break;
    iVar2 = *(int *)(*(int *)(iVar3 + 0x14) + 4);
    if ((iVar2 != 0) && (*(int *)(*(int *)(iVar3 + 0x14) + 8) - iVar2 >> 2 != 0)) {
      iVar3 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x188) + iVar5;
      uVar1 = *(undefined2 *)(iVar2 + 8);
      *(undefined2 *)(iVar3 + 0x40) = *(undefined2 *)(iVar2 + 4);
      *(undefined2 *)(iVar3 + 0x42) = uVar1;
    }
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 0xc;
  }
  return 0;
}

