// FUNCTION: PORT1111 0x00413b80
// name: FUN_00413b80
// sig: undefined4 * FUN_00413b80(undefined4 * param_1)


undefined4 * FUN_00413b80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6343;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00413aa0(&DAT_004e0af4,&local_10,(int *)&param_1);
  if (local_10 == DAT_004e0af8) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar1 = *(int *)(local_10 + 0x10);
  switch(puVar2) {
  case (undefined4 *)0x1a:
  case (undefined4 *)0x23:
  case (undefined4 *)0x37:
  case (undefined4 *)0x43:
    param_1 = operator_new(0x108);
    local_4 = 2;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00408e70(param_1,iVar1,0x40);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x60);
    local_4 = 3;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_0040e7d0(param_1);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x1b:
  case (undefined4 *)0x38:
    param_1 = operator_new(0x108);
    local_4 = 0;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00408e70(param_1,iVar1,0x400);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x60);
    local_4 = 1;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_0040e7d0(param_1);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x1c:
  case (undefined4 *)0x1e:
  case (undefined4 *)0x20:
  case (undefined4 *)0x21:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x28:
  case (undefined4 *)0x29:
  case (undefined4 *)0x3b:
  case (undefined4 *)0x3c:
  case (undefined4 *)0x3f:
  case (undefined4 *)0x40:
  case (undefined4 *)0x41:
  case (undefined4 *)0x44:
  case (undefined4 *)0x74:
    param_1 = operator_new(0x108);
    local_4 = 8;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412090(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x60);
    local_4 = 9;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_0040e7d0(param_1);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x1d:
  case (undefined4 *)0x1f:
  case (undefined4 *)0x39:
  case (undefined4 *)0x3d:
  case (undefined4 *)0x3e:
    param_1 = operator_new(0x108);
    local_4 = 4;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412090(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(100);
    local_4 = 5;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_00412dd0(param_1,0);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x22:
  case (undefined4 *)0x26:
  case (undefined4 *)0x3a:
  case (undefined4 *)0x42:
    param_1 = operator_new(0x108);
    local_4 = 6;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412da0(param_1,iVar1);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x60);
    local_4 = 7;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_0040e7d0(param_1);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x27:
    param_1 = operator_new(0x108);
    local_4 = 10;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412090(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(100);
    local_4 = 0xb;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_00412dd0(param_1,0x6c);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x2a:
    param_1 = operator_new(0x108);
    local_4 = 0xe;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412090(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(100);
    local_4 = 0xf;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_00412dd0(param_1,0x71);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  default:
    switch(*(undefined4 *)(iVar1 + 0x48)) {
    case 1:
    case 9:
      param_1 = operator_new(0x6c);
      local_4 = 0x18;
      if (param_1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      puVar2 = FUN_00411420(param_1,iVar1);
      ExceptionList = local_c;
      return puVar2;
    case 2:
      iVar4 = FUN_00413000(iVar1 + 0x194);
      if (iVar4 == 0) {
        param_1 = operator_new(0x120);
        local_4 = 0x19;
        if (param_1 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = FUN_00408ae0(param_1,iVar1,0);
        }
        local_4 = 0xffffffff;
        param_1 = operator_new(0x54);
        local_4 = 0x1a;
        if (param_1 != (undefined4 *)0x0) {
          puVar3 = FUN_00407020(param_1);
          local_4 = 0xffffffff;
          FUN_004050b0(puVar2,puVar3);
          ExceptionList = local_c;
          return puVar2;
        }
      }
      else {
        param_1 = operator_new(300);
        local_4 = 0x1b;
        if (param_1 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = FUN_0040fff0(param_1,iVar1);
        }
        local_4 = 0xffffffff;
        param_1 = operator_new(0x54);
        local_4 = 0x1c;
        if (param_1 != (undefined4 *)0x0) {
          puVar3 = FUN_0040ffa0(param_1);
          local_4 = 0xffffffff;
          FUN_004050b0(puVar2,puVar3);
          ExceptionList = local_c;
          return puVar2;
        }
      }
      break;
    case 3:
      param_1 = operator_new(0x124);
      local_4 = 0x1d;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_004069e0(param_1,iVar1);
      }
      local_4 = 0xffffffff;
      param_1 = operator_new(0x54);
      local_4 = 0x1e;
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = FUN_00406770(param_1);
        local_4 = 0xffffffff;
        FUN_004050b0(puVar2,puVar3);
        ExceptionList = local_c;
        return puVar2;
      }
      break;
    default:
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    case 5:
      param_1 = operator_new(0x144);
      local_4 = 0x1f;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_0040d3d0(param_1,iVar1);
      }
      local_4 = 0xffffffff;
      param_1 = operator_new(0x60);
      local_4 = 0x20;
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = FUN_0040c960(param_1);
        local_4 = 0xffffffff;
        FUN_004050b0(puVar2,puVar3);
        ExceptionList = local_c;
        return puVar2;
      }
      break;
    case 6:
      param_1 = operator_new(0x130);
      local_4 = 0x23;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_0040e400(param_1,iVar1);
      }
      local_4 = 0xffffffff;
      param_1 = operator_new(0x54);
      local_4 = 0x24;
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = FUN_0040e310(param_1);
        local_4 = 0xffffffff;
        FUN_004050b0(puVar2,puVar3);
        ExceptionList = local_c;
        return puVar2;
      }
      break;
    case 7:
      param_1 = operator_new(0x134);
      local_4 = 0x21;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_00409ee0(param_1,iVar1);
      }
      local_4 = 0xffffffff;
      param_1 = operator_new(0x54);
      local_4 = 0x22;
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = FUN_004099c0(param_1);
        local_4 = 0xffffffff;
        FUN_004050b0(puVar2,puVar3);
        ExceptionList = local_c;
        return puVar2;
      }
      break;
    case 10:
      param_1 = operator_new(300);
      local_4 = 0x25;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_004093a0(param_1,iVar1,0);
      }
      local_4 = 0xffffffff;
      param_1 = operator_new(0x54);
      local_4 = 0x26;
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = FUN_00412e20(param_1);
        local_4 = 0xffffffff;
        FUN_004050b0(puVar2,puVar3);
        ExceptionList = local_c;
        return puVar2;
      }
      break;
    case 0xb:
      param_1 = operator_new(0x120);
      local_4 = 0x27;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_004092e0(param_1,iVar1,0);
      }
      local_4 = 0xffffffff;
      param_1 = operator_new(0x54);
      local_4 = 0x28;
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = FUN_00412e20(param_1);
        local_4 = 0xffffffff;
        FUN_004050b0(puVar2,puVar3);
        ExceptionList = local_c;
        return puVar2;
      }
    }
    break;
  case (undefined4 *)0x2e:
  case (undefined4 *)0x4b:
    param_1 = operator_new(0x120);
    local_4 = 0x12;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00408ff0(param_1,iVar1);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x58);
    local_4 = 0x13;
    goto LAB_00414157;
  case (undefined4 *)0x2f:
  case (undefined4 *)0x4f:
    param_1 = operator_new(0x120);
    local_4 = 0x16;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00408ae0(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x58);
    local_4 = 0x17;
LAB_00414157:
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_0040e1c0(param_1,0);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x34:
  case (undefined4 *)0x4e:
    param_1 = operator_new(0x120);
    local_4 = 0x14;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00408ae0(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(0x54);
    local_4 = 0x15;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_00412e00(param_1);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x75:
    param_1 = operator_new(0x108);
    local_4 = 0xc;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412090(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(100);
    local_4 = 0xd;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_00412dd0(param_1,0x78);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case (undefined4 *)0x76:
    param_1 = operator_new(0x108);
    local_4 = 0x10;
    if (param_1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00412090(param_1,iVar1,0);
    }
    local_4 = 0xffffffff;
    param_1 = operator_new(100);
    local_4 = 0x11;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = FUN_00412dd0(param_1,0x77);
      local_4 = 0xffffffff;
      FUN_004050b0(puVar2,puVar3);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  local_4 = 0xffffffff;
  FUN_004050b0(puVar2,0);
  ExceptionList = local_c;
  return puVar2;
}

