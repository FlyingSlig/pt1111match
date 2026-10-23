// FUNCTION: PORT1111 0x0044f770
// name: FUN_0044f770
// sig: int FUN_0044f770(int * param_1, int * param_2, uint * param_3)


int __cdecl FUN_0044f770(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iStack_8;
  uint uStack_4;
  
  iVar3 = 0;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar2 = (**(code **)(in_EAX + 0x10))
                    (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),
                     *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x98),0);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = FUN_0044ee70((int *)&uStack_4);
  if (iVar2 == 0) {
    if (uStack_4 != 0x4034b50) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_00450710(&iStack_8);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00450710((int *)&uStack_4);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00450710(&iStack_8);
  if (iVar2 == 0) {
    if ((iVar3 == 0) &&
       ((iVar2 = *(int *)(in_EAX + 0x54), iStack_8 != iVar2 || ((iVar2 != 0 && (iVar2 != 8)))))) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_0044ee70(&iStack_8);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_0044ee70(&iStack_8);
  if (iVar2 == 0) {
    if (((iVar3 == 0) && (iStack_8 != *(int *)(in_EAX + 0x5c))) && ((uStack_4 & 8) == 0)) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_0044ee70(&iStack_8);
  if (iVar2 == 0) {
    if (((iVar3 == 0) && (iStack_8 != *(int *)(in_EAX + 0x60))) && ((uStack_4 & 8) == 0)) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_0044ee70(&iStack_8);
  if (iVar2 == 0) {
    if (((iVar3 == 0) && (iStack_8 != *(int *)(in_EAX + 100))) && ((uStack_4 & 8) == 0)) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_00450710((int *)&uStack_4);
  uVar1 = uStack_4;
  if (iVar2 == 0) {
    if ((iVar3 == 0) && (uStack_4 != *(uint *)(in_EAX + 0x68))) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  *param_1 = *param_1 + uStack_4;
  iVar2 = FUN_00450710((int *)&uStack_4);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  *param_2 = *(int *)(in_EAX + 0x98) + 0x1e + uVar1;
  *param_3 = uStack_4;
  *param_1 = *param_1 + uStack_4;
  return iVar3;
}

