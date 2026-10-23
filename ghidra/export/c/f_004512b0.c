// FUNCTION: PORT1111 0x004512b0
// name: FUN_004512b0
// sig: int FUN_004512b0(void * this, uint param_1, char * param_2, uint * param_3, undefined4 param_4, int param_5, int param_6, uint param_7, char * param_8, int param_9, int param_10, undefined4 param_11, int param_12, int param_13, int param_14, int param_15, uint param_16)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FUN_004512b0(void *this,uint param_1,char *param_2,uint *param_3,undefined4 param_4,int param_5,
            int param_6,uint param_7,char *param_8,int param_9,int param_10,undefined4 param_11,
            int param_12,int param_13,int param_14,int param_15,uint param_16)

{
  size_t _Size;
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined *this_00;
  int iVar11;
  void *extraout_ECX;
  undefined1 auStack_10 [12];
  undefined4 local_4;
  
  iVar10 = param_9;
  uVar2 = param_1;
  local_4 = DAT_004ddb0c;
  if (param_1 == 0) {
    return -0x66;
  }
  if ((param_9 != 0) && (param_9 != 8)) {
    return -0x66;
  }
  if ((*(int *)(param_1 + 0x2c) == 1) &&
     (iVar4 = FUN_00450d40(param_1,0,0), this = extraout_ECX, iVar4 != 0)) {
    return iVar4;
  }
  puVar3 = param_3;
  if (param_2 == (char *)0x0) {
    param_2 = "-";
  }
  if (param_8 == (char *)0x0) {
    param_1 = 0;
  }
  else {
    pcVar5 = param_8;
    do {
      cVar1 = *pcVar5;
      this = (void *)CONCAT31((int3)((uint)this >> 8),cVar1);
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_1 = (int)pcVar5 - (int)(param_8 + 1);
  }
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    this = (void *)CONCAT31((int3)((uint)this >> 8),cVar1);
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = (int)pcVar5 - (int)(param_2 + 1);
  if (param_3 == (uint *)0x0) {
    *(undefined4 *)(uVar2 + 0x4088) = 0;
  }
  else {
    uVar7 = param_3[6];
    if (uVar7 == 0) {
      uVar7 = FUN_004506c0(this,param_3);
    }
    *(uint *)(uVar2 + 0x4088) = uVar7;
  }
  *(undefined4 *)(uVar2 + 0x7c) = 0;
  if ((param_10 == 8) || (param_10 == 9)) {
    *(undefined4 *)(uVar2 + 0x7c) = 2;
  }
  if (param_10 == 2) {
    uVar7 = *(uint *)(uVar2 + 0x7c) | 4;
LAB_004513b2:
    *(uint *)(uVar2 + 0x7c) = uVar7;
  }
  else if (param_10 == 1) {
    uVar7 = *(uint *)(uVar2 + 0x7c) | 6;
    goto LAB_004513b2;
  }
  if (param_15 != 0) {
    *(uint *)(uVar2 + 0x7c) = *(uint *)(uVar2 + 0x7c) | 1;
  }
  *(undefined4 *)(uVar2 + 0x408c) = 0;
  *(int *)(uVar2 + 0x80) = iVar10;
  *(undefined4 *)(uVar2 + 0x4090) = 0;
  *(undefined4 *)(uVar2 + 0x68) = 0;
  *(undefined4 *)(uVar2 + 0x6c) = 0;
  *(undefined4 *)(uVar2 + 0x84) = param_11;
  uVar8 = (**(code **)(uVar2 + 0xc))(*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20));
  *(undefined4 *)(uVar2 + 0x70) = uVar8;
  _Size = uVar6 + param_1 + 0x2e + param_7;
  *(size_t *)(uVar2 + 0x78) = _Size;
  puVar9 = _malloc(_Size);
  *(undefined1 **)(uVar2 + 0x74) = puVar9;
  *puVar9 = 0x50;
  puVar9[1] = 0x4b;
  puVar9[2] = 1;
  puVar9[3] = 2;
  iVar10 = *(int *)(uVar2 + 0x74);
  *(undefined1 *)(iVar10 + 4) = 0;
  *(undefined1 *)(iVar10 + 5) = 0;
  iVar10 = *(int *)(uVar2 + 0x74);
  *(undefined1 *)(iVar10 + 6) = 0x14;
  *(undefined1 *)(iVar10 + 7) = 0;
  iVar10 = *(int *)(uVar2 + 0x74);
  uVar8 = *(undefined4 *)(uVar2 + 0x7c);
  *(char *)(iVar10 + 8) = (char)uVar8;
  *(char *)(iVar10 + 9) = (char)((uint)uVar8 >> 8);
  uVar8 = *(undefined4 *)(uVar2 + 0x80);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(char *)(iVar10 + 10) = (char)uVar8;
  *(char *)(iVar10 + 0xb) = (char)((uint)uVar8 >> 8);
  uVar8 = *(undefined4 *)(uVar2 + 0x4088);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(char *)(iVar10 + 0xc) = (char)uVar8;
  *(char *)(iVar10 + 0xd) = (char)((uint)uVar8 >> 8);
  *(char *)(iVar10 + 0xe) = (char)((uint)uVar8 >> 0x10);
  *(char *)(iVar10 + 0xf) = (char)((uint)uVar8 >> 0x18);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(undefined1 *)(iVar10 + 0x10) = 0;
  *(undefined1 *)(iVar10 + 0x11) = 0;
  *(undefined1 *)(iVar10 + 0x12) = 0;
  *(undefined1 *)(iVar10 + 0x13) = 0;
  iVar10 = *(int *)(uVar2 + 0x74);
  *(undefined1 *)(iVar10 + 0x14) = 0;
  *(undefined1 *)(iVar10 + 0x15) = 0;
  *(undefined1 *)(iVar10 + 0x16) = 0;
  *(undefined1 *)(iVar10 + 0x17) = 0;
  iVar10 = *(int *)(uVar2 + 0x74);
  *(undefined1 *)(iVar10 + 0x18) = 0;
  *(undefined1 *)(iVar10 + 0x19) = 0;
  *(undefined1 *)(iVar10 + 0x1a) = 0;
  *(undefined1 *)(iVar10 + 0x1b) = 0;
  iVar10 = *(int *)(uVar2 + 0x74);
  *(char *)(iVar10 + 0x1c) = (char)uVar6;
  *(char *)(iVar10 + 0x1d) = (char)(uVar6 >> 8);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(char *)(iVar10 + 0x1e) = (char)param_7;
  *(char *)(iVar10 + 0x1f) = (char)(param_7 >> 8);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(char *)(iVar10 + 0x20) = (char)param_1;
  *(char *)(iVar10 + 0x21) = (char)(param_1 >> 8);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(undefined1 *)(iVar10 + 0x22) = 0;
  *(undefined1 *)(iVar10 + 0x23) = 0;
  if (puVar3 == (uint *)0x0) {
    iVar10 = *(int *)(uVar2 + 0x74);
    *(undefined1 *)(iVar10 + 0x24) = 0;
    *(undefined1 *)(iVar10 + 0x25) = 0;
    iVar10 = *(int *)(uVar2 + 0x74);
    *(undefined1 *)(iVar10 + 0x26) = 0;
    *(undefined1 *)(iVar10 + 0x27) = 0;
    *(undefined1 *)(iVar10 + 0x28) = 0;
    *(undefined1 *)(iVar10 + 0x29) = 0;
  }
  else {
    iVar10 = *(int *)(uVar2 + 0x74);
    uVar7 = puVar3[7];
    *(char *)(iVar10 + 0x24) = (char)uVar7;
    *(char *)(iVar10 + 0x25) = (char)(uVar7 >> 8);
    iVar10 = *(int *)(uVar2 + 0x74);
    uVar7 = puVar3[8];
    *(char *)(iVar10 + 0x26) = (char)uVar7;
    *(char *)(iVar10 + 0x27) = (char)(uVar7 >> 8);
    *(char *)(iVar10 + 0x28) = (char)(uVar7 >> 0x10);
    *(char *)(iVar10 + 0x29) = (char)(uVar7 >> 0x18);
  }
  iVar4 = *(int *)(uVar2 + 0x70) - *(int *)(uVar2 + 0x40ac);
  iVar10 = *(int *)(uVar2 + 0x74);
  *(char *)(iVar10 + 0x2a) = (char)iVar4;
  *(char *)(iVar10 + 0x2b) = (char)((uint)iVar4 >> 8);
  *(char *)(iVar10 + 0x2c) = (char)((uint)iVar4 >> 0x10);
  uVar7 = 0;
  *(char *)(iVar10 + 0x2d) = (char)((uint)iVar4 >> 0x18);
  if (uVar6 != 0) {
    do {
      *(char *)(*(int *)(uVar2 + 0x74) + 0x2e + uVar7) = param_2[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar7 = 0;
  if (param_7 != 0) {
    do {
      puVar9 = (undefined1 *)(uVar7 + param_6);
      iVar10 = *(int *)(uVar2 + 0x74) + uVar7;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(iVar10 + 0x2e + uVar6) = *puVar9;
    } while (uVar7 < param_7);
  }
  uVar7 = 0;
  if (param_1 != 0) {
    do {
      *(char *)(*(int *)(uVar2 + 0x74) + uVar7 + uVar6 + 0x2e + param_7) = param_8[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1);
  }
  if (*(int *)(uVar2 + 0x74) == 0) {
    return -0x68;
  }
  param_1 = 0x4034b50;
  iVar10 = (**(code **)(uVar2 + 8))
                     (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),&param_1,4);
  if (iVar10 == 4) {
    param_1 = CONCAT22(param_1._2_2_,0x14);
    iVar10 = (**(code **)(uVar2 + 8))
                       (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),&param_1,2);
    if (iVar10 == 2) {
      param_1._0_2_ = (undefined2)*(undefined4 *)(uVar2 + 0x7c);
      iVar10 = (**(code **)(uVar2 + 8))
                         (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),&param_1,2);
      if (iVar10 == 2) {
        param_1._0_2_ = (undefined2)*(undefined4 *)(uVar2 + 0x80);
        iVar10 = (**(code **)(uVar2 + 8))
                           (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),&param_1,2);
        if (iVar10 == 2) {
          param_1 = *(uint *)(uVar2 + 0x4088);
          iVar10 = (**(code **)(uVar2 + 8))
                             (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),&param_1,4
                             );
          if (iVar10 == 4) {
            param_1 = 0;
            iVar10 = (**(code **)(uVar2 + 8))
                               (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),&param_1
                                ,4);
            if (iVar10 == 4) {
              param_1 = 0;
              iVar10 = (**(code **)(uVar2 + 8))
                                 (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),
                                  &param_1,4);
              if (iVar10 == 4) {
                param_1 = 0;
                iVar10 = (**(code **)(uVar2 + 8))
                                   (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),
                                    &param_1,4);
                if (iVar10 == 4) {
                  param_1._0_2_ = (undefined2)uVar6;
                  iVar10 = (**(code **)(uVar2 + 8))
                                     (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),
                                      &param_1,2);
                  if (iVar10 == 2) {
                    param_1._0_2_ = (undefined2)param_5;
                    iVar10 = (**(code **)(uVar2 + 8))
                                       (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),
                                        &param_1,2);
                    if (((iVar10 == 2) &&
                        ((iVar10 = 0, uVar6 == 0 ||
                         (uVar7 = (**(code **)(uVar2 + 8))
                                            (*(undefined4 *)(uVar2 + 0x1c),
                                             *(undefined4 *)(uVar2 + 0x20),param_2,uVar6),
                         uVar7 == uVar6)))) &&
                       ((param_5 == 0 ||
                        (iVar4 = (**(code **)(uVar2 + 8))
                                           (*(undefined4 *)(uVar2 + 0x1c),
                                            *(undefined4 *)(uVar2 + 0x20),param_4,param_5),
                        iVar4 == param_5)))) goto LAB_00451811;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar10 = -1;
LAB_00451811:
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x40) = 0x4000;
  *(uint *)(uVar2 + 0x3c) = uVar2 + 0x88;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  *(undefined4 *)(uVar2 + 0x44) = 0;
  if (((iVar10 == 0) && (*(int *)(uVar2 + 0x80) == 8)) && (*(int *)(uVar2 + 0x84) == 0)) {
    *(undefined4 *)(uVar2 + 0x50) = 0;
    *(undefined4 *)(uVar2 + 0x54) = 0;
    *(undefined4 *)(uVar2 + 0x58) = 0;
    iVar10 = param_12;
    if (0 < param_12) {
      iVar10 = -param_12;
    }
    iVar10 = FUN_004602d0(uVar2 + 0x30,param_10,8,iVar10,param_13,param_14,"1.1.4",0x38);
    if (iVar10 == 0) {
      *(undefined4 *)(uVar2 + 0x68) = 1;
    }
  }
  *(undefined4 *)(uVar2 + 0x40a4) = 0;
  if (iVar10 == 0) {
    if (param_15 != 0) {
      *(undefined4 *)(uVar2 + 0x4090) = 1;
      this_00 = FUN_0045fb80();
      *(undefined **)(uVar2 + 0x40a0) = this_00;
      iVar4 = FUN_004501c0(this_00,param_15,(int)auStack_10,0xc,param_16);
      *(int *)(uVar2 + 0x40a4) = iVar4;
      iVar11 = (**(code **)(uVar2 + 8))
                         (*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),auStack_10,
                          iVar4);
      if (iVar11 != iVar4) {
        return -1;
      }
    }
    *(undefined4 *)(uVar2 + 0x2c) = 1;
  }
  return iVar10;
}

