// FUNCTION: PORT1111 0x00439210
// name: FUN_00439210
// sig: undefined4 FUN_00439210(int param_1, undefined1 * param_2)


undefined4 FUN_00439210(int param_1,undefined1 *param_2)

{
  void *this;
  undefined3 uVar4;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = (undefined3)((uint)param_2 >> 8);
  if ((uVar3 == 3) && (*(int *)(*(int *)(param_1 + 0xc) + 8) == 1)) {
    iVar1 = *(int *)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 8);
    if (iVar1 == 1) goto LAB_004392f8;
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_00439305;
  }
  if (uVar3 == 0) {
    iVar1 = FUN_004662f0(*(void **)(param_1 + 0xc),"no");
    if (iVar1 != 0) {
LAB_00439294:
      *param_2 = 0;
      return CONCAT31(uVar4,1);
    }
    iVar1 = FUN_004662f0(*(void **)(param_1 + 0xc),(uchar *)"false");
    if (iVar1 != 0) goto LAB_00439294;
    iVar1 = FUN_004662f0(*(void **)(param_1 + 0xc),"yes");
    if (iVar1 != 0) {
LAB_00439287:
      *param_2 = 1;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
    iVar1 = FUN_004662f0(*(void **)(param_1 + 0xc),"true");
    uVar3 = 0;
    if (iVar1 != 0) goto LAB_00439287;
  }
  if ((*(int *)(param_1 + 8) == 6) && (*(int *)(*(int *)(param_1 + 0xc) + 8) == 1)) {
    this = *(void **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 8);
    iVar2 = FUN_004662f0(this,"no");
    if (iVar2 == 0) {
      iVar2 = FUN_004662f0(this,(uchar *)"false");
      if (iVar2 == 0) {
        iVar1 = FUN_004662f0(this,"yes");
        if (iVar1 == 0) {
          iVar1 = FUN_004662f0(this,"true");
          uVar3 = 0;
          if (iVar1 == 0) goto LAB_00439312;
        }
LAB_004392f8:
        *param_2 = 1;
        return CONCAT31(uVar4,1);
      }
    }
LAB_00439305:
    *param_2 = 0;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_00439312:
  return uVar3 & 0xffffff00;
}

