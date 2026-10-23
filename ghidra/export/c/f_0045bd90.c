// FUNCTION: PORT1111 0x0045bd90
// name: FUN_0045bd90
// sig: undefined4 FUN_0045bd90(void * this, ushort param_1, int param_2, int param_3, undefined4 param_4)


undefined4 __thiscall
FUN_0045bd90(void *this,ushort param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  int *piVar7;
  void *unaff_EBX;
  void *pvVar8;
  uint unaff_ESI;
  uint uVar9;
  uchar *puVar10;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9514;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00480c10(this,param_1,(ushort)param_2);
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return 1;
  }
  uVar1 = (uint)param_1;
  iVar2 = (**(code **)(*(int *)((int)this + 0xd8) + 0x14))(uVar1);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)((int)this + 0x394) + 0x14))(uVar1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)((int)this + 0x650) + 0x14))(uVar1);
      if (iVar2 == 0) {
        if ((0x46 < param_1) && (param_1 < 0x4b)) {
          iVar2 = FUN_004810c0((int)this + 0x4c);
          *(uint *)((int)this + 0xbcc) = iVar2 + -0x47 + uVar1;
          iVar2 = FUN_004810c0((int)this + 0x4c);
          FUN_0045a5e0(this,iVar2 + -0x47 + uVar1);
          FUN_0045afa0(this);
          ExceptionList = (void *)0x0;
          return 1;
        }
        iVar2 = FUN_00481860((void *)((int)this + 0x4c),uVar1);
        if (iVar2 != 0) {
          *(undefined4 *)((int)this + 0xd4) = 1;
          FUN_0045afa0(this);
          ExceptionList = (void *)0x0;
          return 1;
        }
        iVar2 = (**(code **)(*(int *)((int)this + 0x90c) + 0x14))(uVar1);
        if (iVar2 != 0) {
          iVar2 = FUN_00482180((void *)((int)this + 0x90c),uVar1);
          if (iVar2 != 0) {
            FUN_0045b2f0(this);
          }
          ExceptionList = unaff_EBX;
          return 1;
        }
        if (param_1 == 0xd5) {
          FUN_0045abf0(this);
          ExceptionList = unaff_EBX;
          return 1;
        }
        if (param_1 == 0xd6) {
          FUN_0045ab30((int)this);
          ExceptionList = unaff_EBX;
          return 1;
        }
        if (param_1 == 0xd9) {
          iVar2 = FUN_00456750(*(int *)((int)this + 0xd0));
          if (iVar2 != 0) {
            pvVar8 = operator_new(0x32c);
            local_c = (void *)0x0;
            if (pvVar8 == (void *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              puVar5 = FUN_00468110(DAT_004e2b14,&param_2,"DATA\\ai");
              uVar11 = 0;
              uVar4 = 0;
              puVar10 = "ai";
              local_c = (void *)CONCAT31(local_c._1_3_,1);
              unaff_ESI = 1;
              puVar6 = (uchar *)FUN_00465e00(puVar5);
              piVar7 = FUN_004472e0(pvVar8,*(int *)((int)this + 0x24),1,puVar6,puVar10,uVar4,uVar11)
              ;
            }
            local_c = (void *)0xffffffff;
            if ((unaff_ESI & 1) != 0) {
              FUN_00465e40(&param_2);
            }
            (**(code **)(*piVar7 + 0xb8))();
          }
          ExceptionList = unaff_EBX;
          return 1;
        }
        if (param_1 == 0xda) {
          FUN_0045a8e0(*(int *)((int)this + 0x24),&DAT_004c4a84,0xda,0);
        }
        else {
          switch(uVar1) {
          case 0x3f2:
          case 0x3f3:
          case 0x3f4:
            iVar2 = 1;
            break;
          default:
            goto switchD_0045c106_caseD_3f5;
          case 0x3f7:
          case 0x3f8:
          case 0x3f9:
            iVar2 = 0;
          }
          FUN_0045b220(this,uVar1,iVar2);
        }
switchD_0045c106_caseD_3f5:
        ExceptionList = unaff_EBX;
        return 0;
      }
      param_3 = 2;
    }
    else {
      param_3 = 1;
    }
  }
  else {
    param_3 = 0;
  }
  iVar3 = FUN_004810c0((int)this + 0x4c);
  iVar2 = param_3;
  uVar9 = iVar3 + param_3;
  *(uint *)((int)this + 0xbcc) = uVar9;
  iVar3 = FUN_00457ca0(*(void **)(*(int *)((int)this + 0xd0) + 0x10),uVar9);
  param_2 = FUN_00484bd0(iVar3);
  uVar4 = FUN_004810c0(*(int *)(iVar2 * 700 + 0x380 + (int)this));
  pvVar8 = (void *)((int)this + iVar2 * 700 + 0xd8);
  *(undefined4 *)(param_2 + 0x14) = uVar4;
  iVar2 = FUN_00482180(pvVar8,uVar1);
  if (iVar2 != 0) {
    param_2 = FUN_00457c20(param_2);
    iVar2 = FUN_004822f0(pvVar8,uVar1);
    if (param_2 <= iVar2) {
      iVar2 = -1;
    }
    FUN_0045a670(this,uVar9,param_3,iVar2);
    FUN_0045afa0(this);
  }
  ExceptionList = (void *)0x0;
  return 1;
}

