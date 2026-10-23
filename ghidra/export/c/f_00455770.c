// FUNCTION: PORT1111 0x00455770
// name: FUN_00455770
// sig: undefined FUN_00455770(void * this, int param_1)


void __thiscall FUN_00455770(void *this,int param_1)

{
  undefined4 uVar1;
  void **ppvVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined3 extraout_var;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8dec;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)((int)this + param_1 * 8 + 0x8a4);
  switch(uVar1) {
  case 0x3b:
    ExceptionList = &local_c;
    iVar4 = FUN_00453b70(*(int *)((int)DAT_004e240c + 0x21c));
    if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0x3c) & 0x10000) != 0)) {
      FUN_00409530(iVar4);
      if ((*(int *)(iVar4 + 0x120) < 1) || ((0x14 < *(int *)(iVar4 + 0x120) || (DAT_004e2444 == 0)))
         ) break;
    }
    puVar6 = operator_new(0x34);
    local_4 = 3;
    if (puVar6 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = FUN_00433100(puVar6);
    }
    local_4 = 0xffffffff;
    iVar4 = FUN_00453ab0(*(int *)((int)DAT_004e240c + 0x21c));
    piVar7[1] = iVar4;
LAB_00455ba1:
    FUN_00412e90(piVar7);
    break;
  case 0x3c:
  case 0x3f:
    break;
  case 0x3d:
    piVar7 = *(int **)(*(int *)((int)DAT_004e240c + 0x21c) + 4);
    piVar8 = (int *)*piVar7;
    ExceptionList = &local_c;
    if (piVar8 != piVar7) {
      do {
        pvVar5 = (void *)FUN_00414c30((int)DAT_004e240c);
        FUN_00405f60(pvVar5,*(int *)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xa4));
        bVar3 = FUN_00405f40(pvVar5,0);
        if (CONCAT31(extraout_var,bVar3) == 0) {
          puVar6 = operator_new(0x34);
          local_4 = 1;
          if (puVar6 == (undefined4 *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = FUN_00433810(puVar6);
          }
          piVar7[1] = piVar8[2];
          local_4 = 0xffffffff;
          FUN_00412e90(piVar7);
        }
        else {
          FUN_00414e10(DAT_004e240c,piVar8[2]);
        }
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)*(int *)(*(int *)((int)DAT_004e240c + 0x21c) + 4));
      ExceptionList = local_c;
      return;
    }
    break;
  case 0x3e:
    ExceptionList = &local_c;
    FUN_004177c0(DAT_004e240c);
    ExceptionList = local_c;
    return;
  case 0x40:
    ExceptionList = &local_c;
    pvVar5 = (void *)FUN_00453b70(*(int *)((int)DAT_004e240c + 0x21c));
    if (pvVar5 != (void *)0x0) {
      FUN_00405ad0(pvVar5,-1,-1);
      puVar6 = operator_new(0x34);
      local_4 = 2;
      if (puVar6 == (undefined4 *)0x0) {
        uRam00000004 = *(undefined4 *)((int)pvVar5 + 0x10);
        local_4 = 0xffffffff;
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = FUN_00432910(puVar6);
        local_4 = 0xffffffff;
        piVar7[1] = *(int *)((int)pvVar5 + 0x10);
      }
      goto LAB_00455ba1;
    }
    break;
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x4b:
    ExceptionList = &local_c;
    pvVar5 = (void *)FUN_00453b70(*(int *)((int)DAT_004e240c + 0x21c));
    if (pvVar5 != (void *)0x0) {
      FUN_00405ad0(pvVar5,-1,-1);
      puVar6 = operator_new(0x34);
      local_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = FUN_00434d90(puVar6);
      }
      piVar7[1] = *(int *)((int)pvVar5 + 0x10);
      local_4 = 0xffffffff;
      switch(uVar1) {
      case 0x41:
        piVar7[5] = 7;
        break;
      case 0x42:
        piVar7[5] = 8;
        break;
      case 0x43:
        piVar7[5] = 9;
        break;
      case 0x44:
        piVar7[5] = 10;
        break;
      case 0x45:
        piVar7[5] = 0xb;
        break;
      case 0x4b:
        piVar7[5] = 0xd;
      default:
      }
      goto LAB_00455ba1;
    }
    break;
  case 0x46:
    ExceptionList = &local_c;
    piVar7 = (int *)FUN_00453b70(*(int *)((int)DAT_004e240c + 0x21c));
    if (piVar7 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar7 + 0x88))();
      FUN_004534b0((void *)((int)this + 0x888),*(int *)(iVar4 + 0x34),
                   ((piVar7[0x37] * 5 + piVar7[0x36]) * 10) / 100);
      piVar7[0x36] = 0;
      piVar7[0x37] = 0;
      ExceptionList = local_c;
      return;
    }
    break;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
    piVar7 = *(int **)(*(int *)((int)DAT_004e240c + 0x21c) + 4);
    piVar8 = (int *)*piVar7;
    ExceptionList = &local_c;
    ppvVar2 = &local_c;
    if (piVar8 != piVar7) {
      do {
        ExceptionList = ppvVar2;
        pvVar5 = (void *)FUN_00414c30((int)DAT_004e240c);
        FUN_00405ad0(pvVar5,-1,-1);
        FUN_004137d0((int)pvVar5);
        if ((*(byte *)((int)pvVar5 + 0x3c) & 4) != 0) {
          switch(uVar1) {
          case 0x47:
            *(undefined4 *)((int)pvVar5 + 0x104) = 0;
            iVar4 = 0x410;
            break;
          case 0x48:
            *(undefined4 *)((int)pvVar5 + 0x104) = 1;
            iVar4 = 0x411;
            break;
          case 0x49:
            *(undefined4 *)((int)pvVar5 + 0x104) = 2;
            iVar4 = 0x412;
            break;
          case 0x4a:
            *(undefined4 *)((int)pvVar5 + 0x104) = 3;
            iVar4 = 0x413;
            break;
          default:
            goto switchD_00455884_default;
          }
          FUN_00445030(*(void **)((int)pvVar5 + 0xb0),iVar4);
        }
switchD_00455884_default:
        piVar8 = (int *)*piVar8;
        ppvVar2 = ExceptionList;
      } while (piVar8 != (int *)*(int *)(*(int *)((int)DAT_004e240c + 0x21c) + 4));
    }
    FUN_004551c0();
    FUN_00455220(this);
    ExceptionList = local_c;
    return;
  default:
    goto switchD_004557ac_default;
  }
switchD_004557ac_default:
  ExceptionList = local_c;
  return;
}

