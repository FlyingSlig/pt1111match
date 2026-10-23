// FUNCTION: PORT1111 0x0044f180
// name: FUN_0044f180
// sig: int FUN_0044f180(int * param_1, int * param_2, int param_3, uint param_4, int param_5, uint param_6, int param_7, uint param_8)


/* WARNING: Type propagation algorithm not settling */

int __cdecl
FUN_0044f180(int *param_1,int *param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7
            ,uint param_8)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uStack_58;
  int iStack_54;
  int aiStack_50 [4];
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar4 = 0;
  if (in_EAX == 0) {
    return -0x66;
  }
  iVar1 = (**(code **)(in_EAX + 0x10))
                    (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),
                     *(int *)(in_EAX + 0x34) + *(int *)(in_EAX + 0x2c),0);
  if (iVar1 == 0) {
    iVar1 = FUN_0044ee70((int *)&uStack_58);
    if (iVar1 == 0) {
      if (uStack_58 != 0x2014b50) {
        iVar4 = -0x67;
      }
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710(aiStack_50);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710(aiStack_50 + 1);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710(aiStack_50 + 2);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710(aiStack_50 + 3);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_0044ee70((int *)&uStack_40);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  uStack_c = uStack_40 >> 0x10 & 0x1f;
  iStack_4 = (uStack_40 >> 0x19) + 0x7bc;
  iStack_8 = (uStack_40 >> 0x15 & 0xf) - 1;
  uStack_10 = uStack_40 >> 0xb & 0x1f;
  uStack_14 = uStack_40 >> 5 & 0x3f;
  iStack_18 = (uStack_40 & 0x1f) << 1;
  iVar1 = FUN_0044ee70(&iStack_3c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_0044ee70(&iStack_38);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_0044ee70(&iStack_34);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710((int *)&uStack_30);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710((int *)&uStack_2c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710((int *)&uStack_28);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710(&iStack_24);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_00450710(&iStack_20);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_0044ee70(&iStack_1c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_0044ee70(&iStack_54);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  uVar3 = uStack_30;
  if (iVar4 == 0) {
    if (param_3 != 0) {
      uVar3 = param_4;
      if (uStack_30 < param_4) {
        *(undefined1 *)(uStack_30 + param_3) = 0;
        uVar3 = uStack_30;
      }
      if (((uStack_30 != 0) && (param_4 != 0)) &&
         (uVar2 = (**(code **)(in_EAX + 4))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),param_3,
                             uVar3), uVar2 != uVar3)) {
        iVar4 = -1;
      }
      uVar3 = uStack_30 - uVar3;
      if (iVar4 != 0) goto LAB_0044f450;
    }
    if (param_5 != 0) {
      uStack_58 = uStack_2c;
      if (param_6 <= uStack_2c) {
        uStack_58 = param_6;
      }
      if (uVar3 != 0) {
        iVar1 = (**(code **)(in_EAX + 0x10))
                          (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),uVar3,1);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          iVar4 = -1;
        }
      }
      if (((uStack_2c != 0) && (param_6 != 0)) &&
         (uVar2 = (**(code **)(in_EAX + 4))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),param_5,
                             uStack_58), uVar2 != uStack_58)) {
        iVar4 = -1;
      }
      iVar1 = uVar3 + (uStack_2c - uStack_58);
      goto LAB_0044f454;
    }
  }
LAB_0044f450:
  iVar1 = uVar3 + uStack_2c;
LAB_0044f454:
  if (iVar4 == 0) {
    if (param_7 != 0) {
      if (uStack_28 < param_8) {
        *(undefined1 *)(uStack_28 + param_7) = 0;
        uStack_58 = uStack_28;
      }
      else {
        uStack_58 = param_8;
      }
      iVar5 = 0;
      if ((iVar1 != 0) &&
         (iVar4 = (**(code **)(in_EAX + 0x10))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),iVar1,1),
         iVar4 != 0)) {
        iVar5 = -1;
      }
      if (((uStack_28 != 0) && (param_8 != 0)) &&
         (uVar3 = (**(code **)(in_EAX + 4))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),param_7,
                             uStack_58), uVar3 != uStack_58)) {
        return -1;
      }
      iVar4 = 0;
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    if (param_1 != (int *)0x0) {
      piVar6 = aiStack_50;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = *piVar6;
        piVar6 = piVar6 + 1;
        param_1 = param_1 + 1;
      }
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iStack_54;
    }
  }
  return iVar4;
}

