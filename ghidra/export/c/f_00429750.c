// FUNCTION: PORT1111 0x00429750
// name: FUN_00429750
// sig: int FUN_00429750(int param_1, int param_2, int * param_3, int * param_4)


int FUN_00429750(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = (param_1 - DAT_004e2c30) + -0x20;
  iVar4 = (param_2 - DAT_004e2c34) * 0x200;
  iVar1 = iVar4 + iVar2 * 0x100;
  iVar4 = iVar4 + iVar2 * -0x100;
  *param_3 = iVar1 >> 0xe;
  uVar3 = iVar1 >> 6 & 0xff;
  uVar5 = iVar4 >> 6 & 0xff;
  *param_4 = iVar4 >> 0xe;
  if (uVar3 < 0x81) {
    if (uVar5 < 0x80) {
      return (uVar5 <= uVar3) + 1;
    }
    if ((uVar3 < 0x80) && (0x7f < uVar5)) {
      return (((int)(0x100 - uVar5) <= (int)uVar3) - 1 & 0xfffffffd) + 4;
    }
    if (uVar3 < 0x81) goto LAB_0042980e;
  }
  if (uVar5 < 0x80) {
    return ((int)(0x100 - uVar3) <= (int)uVar5) + 2;
  }
LAB_0042980e:
  if ((0x7f < uVar3) && (0x7f < uVar5)) {
    return (uVar3 < uVar5) + 3;
  }
  return 0;
}

