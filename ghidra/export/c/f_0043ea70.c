// FUNCTION: PORT1111 0x0043ea70
// name: FUN_0043ea70
// sig: bool FUN_0043ea70(void * this, int * param_1, int * param_2, undefined4 param_3, int param_4, int * param_5)


bool __thiscall
FUN_0043ea70(void *this,int *param_1,int *param_2,undefined4 param_3,int param_4,int *param_5)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  int iVar3;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  
  *param_5 = 0;
  switch(param_3) {
  case 0:
    iVar3 = param_1[0x14];
    if (*(char *)(iVar3 + 0x104) == '\0') {
      return false;
    }
    if (*(char *)(iVar3 + 0x106) != '\0') {
      return false;
    }
    if (*(char *)(iVar3 + 0x107) != '\0') {
      return false;
    }
    goto LAB_0043ead1;
  case 1:
    if (((*(char *)(param_1[0x14] + 0x106) != '\0') &&
        (iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 != 0)) &&
       ((bVar2 = FUN_00412be0(param_2,(int)param_1), CONCAT31(extraout_var_03,bVar2) != 0 &&
        (bVar2 = FUN_004056c0(param_1,param_2), CONCAT31(extraout_var_04,bVar2) == 0)))) {
      return true;
    }
    break;
  case 2:
    if (*(char *)(param_1[0x14] + 0x107) == '\0') {
      return false;
    }
LAB_0043ead1:
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (((iVar3 != 0) &&
        (bVar2 = FUN_00412be0(param_2,(int)param_1), CONCAT31(extraout_var,bVar2) != 0)) &&
       (iVar3 = FUN_00407d00((int)param_1), 0 < iVar3)) {
LAB_0043eb06:
      bVar2 = FUN_004056c0(param_1,param_2);
      if (CONCAT31(extraout_var_00,bVar2) == 0) {
        iVar3 = FUN_00407d00((int)param_1);
        *param_5 = iVar3 / 0x3c;
        return true;
      }
    }
    break;
  case 3:
    if ((((param_1[0xf] & 0x400U) != 0) &&
        (cVar1 = (**(code **)(**(int **)(param_1[0x18] + 0x1c) + 0x18))(), cVar1 == '\0')) &&
       (bVar2 = FUN_004056c0(param_1,param_2), CONCAT31(extraout_var_05,bVar2) == 0)) {
      return true;
    }
    break;
  case 4:
    if ((((param_1[0xf] & 0x100U) != 0) &&
        (bVar2 = FUN_004056c0(param_1,param_2), CONCAT31(extraout_var_06,bVar2) == 0)) &&
       ((bVar2 = FUN_00412be0(param_2,(int)param_1), CONCAT31(extraout_var_07,bVar2) != 0 &&
        (((bVar2 = FUN_0040e640(param_1,param_2[4]), CONCAT31(extraout_var_08,bVar2) == 0 &&
          (param_1[0x49] == 2)) && (iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 != 0)))))) {
      return true;
    }
    break;
  case 5:
    if (((((param_1[0xf] & 0x100U) == 0) &&
         (bVar2 = FUN_004056c0(param_1,param_2), CONCAT31(extraout_var_09,bVar2) != 0)) &&
        (param_1[0x1f] == 0)) &&
       (((param_4 == 0 || (iVar3 = (**(code **)(param_1[5] + 0x14))(), iVar3 != 0)) &&
        (iVar3 = FUN_0045ee50((int *)((int)this + 4),param_2,param_1), iVar3 != 0)))) {
      iVar3 = FUN_0043e940(param_2,(int)param_1);
      if (iVar3 != 0) {
        *param_5 = -30000;
      }
      return true;
    }
    return false;
  case 6:
    iVar3 = param_1[0x14];
    if ((*(char *)(iVar3 + 0x104) == '\0') && (*(char *)(iVar3 + 0x107) == '\0')) {
      return false;
    }
    if (*(char *)(iVar3 + 0x106) != '\0') {
      return false;
    }
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (iVar3 == 0) {
      return false;
    }
    bVar2 = FUN_00412be0(param_2,(int)param_1);
    if (CONCAT31(extraout_var_01,bVar2) == 0) {
      return false;
    }
    bVar2 = FUN_00432360((int)param_1);
    if (CONCAT31(extraout_var_02,bVar2) == 0) {
      return false;
    }
    goto LAB_0043eb06;
  case 7:
    bVar2 = FUN_004056c0(param_1,param_2);
    if (CONCAT31(extraout_var_10,bVar2) != 0) {
      return false;
    }
    if (param_1[0x1f] != 0) {
      return false;
    }
    bVar2 = FUN_00412be0(param_2,(int)param_1);
    if (CONCAT31(extraout_var_11,bVar2) == 0) {
      return false;
    }
    switch(param_4) {
    case 0x29:
    case 0x97:
      goto switchD_0043eec7_caseD_55;
    case 0x2a:
    case 0x98:
      goto switchD_0043eec7_caseD_56;
    case 0x2b:
    case 0x99:
      goto switchD_0043eec7_caseD_57;
    case 0x2c:
    case 0x9a:
      goto switchD_0043eec7_caseD_58;
    case 0x2d:
    case 0x9b:
      goto switchD_0043eec7_caseD_59;
    case 0x2e:
    case 0x9c:
      goto switchD_0043eec7_caseD_5a;
    case 0x2f:
    case 0x9d:
      goto switchD_0043eec7_caseD_5b;
    case 0x30:
    case 0x9e:
      goto switchD_0043eec7_caseD_5c;
    case 0x31:
    case 0x9f:
      goto switchD_0043eec7_caseD_5d;
    case 0x32:
    case 0xa0:
      goto switchD_0043eec7_caseD_5e;
    default:
      goto switchD_0043ea99_caseD_9;
    case 0x35:
      return *(int *)(param_1[0x14] + 0x2a0) == 0xd;
    case 0x36:
      return *(int *)(param_1[0x14] + 0x2a0) == 0xe;
    case 0x37:
    case 0xa2:
      return *(int *)(param_1[0x14] + 0x2a8) == 2;
    case 0x38:
    case 0xa3:
      return *(int *)(param_1[0x14] + 0x2a0) == 0x10;
    case 0x39:
      goto switchD_0043eec7_caseD_65;
    case 0x3a:
      goto switchD_0043eec7_caseD_66;
    case 0x3b:
      goto switchD_0043eec7_caseD_67;
    case 0x3c:
      goto switchD_0043eec7_caseD_68;
    case 0x3d:
      goto switchD_0043eec7_caseD_69;
    case 0x3e:
      goto switchD_0043eec7_caseD_6a;
    case 0x3f:
      goto switchD_0043eec7_caseD_6b;
    case 0x40:
      goto switchD_0043eec7_caseD_6c;
    case 0x41:
      goto switchD_0043eec7_caseD_6d;
    case 0x42:
      goto switchD_0043eec7_caseD_6e;
    case 0x43:
      goto switchD_0043eec7_caseD_6f;
    case 0x44:
    case 0xa6:
      goto switchD_0043eec7_caseD_70;
    case 0x45:
    case 0xa5:
      goto switchD_0043eec7_caseD_71;
    case 0x46:
    case 0xa4:
      goto switchD_0043eec7_caseD_72;
    case 0x47:
    case 0xa1:
      return *(int *)(param_1[0x14] + 0x2a8) == 3;
    case 0x48:
      goto switchD_0043eec7_caseD_74;
    case 0x49:
      goto switchD_0043eec7_caseD_75;
    case 0x4a:
      goto switchD_0043eec7_caseD_76;
    case 0x4b:
      return *(int *)(param_1[0x14] + 0x2a8) == 5;
    case 0x4c:
      return *(char *)(param_1[0x14] + 0x2ac) == '\0';
    case 0x4d:
      return (bool)*(undefined1 *)(param_1[0x14] + 0x2ac);
    case 0x4e:
      return *(char *)(param_1[0x14] + 0x2ad) == '\0';
    case 0x4f:
      goto switchD_0043eec7_caseD_7b;
    }
  case 8:
    goto switchD_0043ea99_caseD_8;
  case 9:
switchD_0043ea99_caseD_9:
    iVar3 = (**(code **)(param_1[5] + 0x14))();
    if (iVar3 == 0) {
      return false;
    }
switchD_0043ea99_caseD_8:
    bVar2 = FUN_004056c0(param_1,param_2);
    if (((CONCAT31(extraout_var_12,bVar2) != 0) && (param_1[0x1f] == 0)) &&
       (bVar2 = FUN_00412be0(param_2,(int)param_1), CONCAT31(extraout_var_13,bVar2) != 0)) {
      switch(param_4) {
      case 0x55:
switchD_0043eec7_caseD_55:
        return *(int *)(param_1[0x14] + 0x2a0) == 1;
      case 0x56:
switchD_0043eec7_caseD_56:
        return *(int *)(param_1[0x14] + 0x2a0) == 2;
      case 0x57:
switchD_0043eec7_caseD_57:
        return *(int *)(param_1[0x14] + 0x2a0) == 3;
      case 0x58:
switchD_0043eec7_caseD_58:
        return *(int *)(param_1[0x14] + 0x2a0) == 4;
      case 0x59:
switchD_0043eec7_caseD_59:
        return *(int *)(param_1[0x14] + 0x2a0) == 5;
      case 0x5a:
switchD_0043eec7_caseD_5a:
        return *(int *)(param_1[0x14] + 0x2a0) == 6;
      case 0x5b:
switchD_0043eec7_caseD_5b:
        return *(int *)(param_1[0x14] + 0x2a0) == 7;
      case 0x5c:
switchD_0043eec7_caseD_5c:
        return *(int *)(param_1[0x14] + 0x2a0) == 8;
      case 0x5d:
switchD_0043eec7_caseD_5d:
        return *(int *)(param_1[0x14] + 0x2a0) == 9;
      case 0x5e:
switchD_0043eec7_caseD_5e:
        return *(int *)(param_1[0x14] + 0x2a0) == 10;
      case 0x5f:
        return *(int *)(param_1[0x14] + 0x2a0) == 0xb;
      case 0x60:
        return *(int *)(param_1[0x14] + 0x2a0) == 0xc;
      case 0x61:
        return *(int *)(param_1[0x14] + 0x2a0) == 0xd;
      case 0x62:
        return *(int *)(param_1[0x14] + 0x2a0) == 0xe;
      case 99:
        return *(int *)(param_1[0x14] + 0x2a8) == 2;
      case 100:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x10;
      case 0x65:
switchD_0043eec7_caseD_65:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x11;
      case 0x66:
switchD_0043eec7_caseD_66:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x12;
      case 0x67:
switchD_0043eec7_caseD_67:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x13;
      case 0x68:
switchD_0043eec7_caseD_68:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x14;
      case 0x69:
switchD_0043eec7_caseD_69:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x15;
      case 0x6a:
switchD_0043eec7_caseD_6a:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x16;
      case 0x6b:
switchD_0043eec7_caseD_6b:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x17;
      case 0x6c:
switchD_0043eec7_caseD_6c:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x18;
      case 0x6d:
switchD_0043eec7_caseD_6d:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x19;
      case 0x6e:
switchD_0043eec7_caseD_6e:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x1a;
      case 0x6f:
switchD_0043eec7_caseD_6f:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x1b;
      case 0x70:
switchD_0043eec7_caseD_70:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x1c;
      case 0x71:
switchD_0043eec7_caseD_71:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x1d;
      case 0x72:
switchD_0043eec7_caseD_72:
        return *(int *)(param_1[0x14] + 0x2a0) == 0x1e;
      case 0x73:
        return *(int *)(param_1[0x14] + 0x2a8) == 3;
      case 0x74:
switchD_0043eec7_caseD_74:
        if (*(int *)(param_1[0x14] + 0x2a8) != 1) {
          return false;
        }
        bVar2 = *(int *)(param_1[0x14] + 0x2a4) == 3;
        break;
      case 0x75:
switchD_0043eec7_caseD_75:
        if (*(int *)(param_1[0x14] + 0x2a8) != 1) {
          return false;
        }
        bVar2 = *(int *)(param_1[0x14] + 0x2a4) == 2;
        break;
      case 0x76:
switchD_0043eec7_caseD_76:
        if (*(int *)(param_1[0x14] + 0x2a8) != 1) {
          return false;
        }
        bVar2 = *(int *)(param_1[0x14] + 0x2a4) == 4;
        break;
      case 0x77:
        return *(int *)(param_1[0x14] + 0x2a8) == 5;
      case 0x78:
        return *(char *)(param_1[0x14] + 0x2ac) == '\0';
      case 0x79:
        return (bool)*(undefined1 *)(param_1[0x14] + 0x2ac);
      case 0x7a:
        return *(char *)(param_1[0x14] + 0x2ad) == '\0';
      case 0x7b:
switchD_0043eec7_caseD_7b:
        return (bool)*(undefined1 *)(param_1[0x14] + 0x2ad);
      default:
        goto LAB_0043f094;
      }
      if (bVar2) {
        return true;
      }
    }
    break;
  case 10:
    if (((*(int *)(param_1[0x14] + 0x14) == param_4) &&
        (iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 == 0)) &&
       ((bVar2 = FUN_004056c0(param_1,param_2), CONCAT31(extraout_var_14,bVar2) == 0 &&
        (bVar2 = FUN_00412be0(param_2,(int)param_1), CONCAT31(extraout_var_15,bVar2) != 0)))) {
      return true;
    }
    break;
  case 0xb:
    if ((((*(byte *)(param_1 + 0xf) & 8) != 0) &&
        (((iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 == 0 ||
          (iVar3 = (**(code **)(*param_1 + 0xd0))(), iVar3 != 0)) &&
         (bVar2 = FUN_004056c0(param_1,param_2), CONCAT31(extraout_var_16,bVar2) == 0)))) &&
       (bVar2 = FUN_00412be0(param_2,(int)param_1), CONCAT31(extraout_var_17,bVar2) != 0)) {
      return true;
    }
  }
LAB_0043f094:
  return false;
}

