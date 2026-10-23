// FUNCTION: PORT1111 0x00447ff0
// name: FUN_00447ff0
// sig: undefined4 FUN_00447ff0(void * this, int * param_1, undefined2 param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00447ff0(void *this,int *param_1,undefined2 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  int *piVar5;
  HWND hWnd;
  int **ppiVar6;
  uchar *puVar7;
  UINT Msg;
  undefined2 uVar8;
  undefined4 uVar9;
  WPARAM wParam;
  undefined4 uVar10;
  LPARAM lParam;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar5 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b86fe;
  local_c = ExceptionList;
  switch(param_2) {
  case 9:
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 == 0xd3) {
      wParam = piVar5[0x13];
      lParam = 0;
      Msg = 0x87c5;
      hWnd = (HWND)(**(code **)(*(int *)this + 0x4c))();
      PostMessageA(hWnd,Msg,wParam,lParam);
    }
    ExceptionList = local_c;
    return 1;
  default:
    goto switchD_00448029_caseD_a;
  case 0xf:
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 != 0xd3) {
      ExceptionList = local_c;
      return 1;
    }
    FUN_00447a90(piVar5,(undefined4 *)&stack0xffffffe0);
    FUN_0041c3e0(0x4e2430);
    _DAT_004e2440 = 1;
    if (param_3 == (void *)0x1) {
      DAT_004dc298 = 0xffffffff;
      _DAT_004e2438 = 2;
      (**(code **)*DAT_004e2b20)();
      FUN_00480290((int)this);
      pvVar2 = *(void **)((int)this + 0x24);
      uVar8 = *(undefined2 *)((int)pvVar2 + 0x1c);
LAB_004481cf:
      FUN_0047c660(pvVar2,0x2711,uVar8,0);
      ExceptionList = local_c;
      return 0;
    }
    if (param_3 != (void *)0x2) {
      _DAT_004e2440 = 1;
      ExceptionList = local_c;
      return 0;
    }
    _DAT_004e2438 = 1;
    param_3 = operator_new(0x54);
    uStack_4 = 7;
    if (param_3 == (void *)0x0) {
LAB_0044829b:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_004471d0(param_3,*(int *)((int)this + 0x24),0xf);
    }
    break;
  case 0x12:
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 == 0xd4) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_3 != (void *)0xb) {
      if (param_3 != (void *)0xf) {
        ExceptionList = local_c;
        return 0;
      }
      DAT_004dc298 = 1;
      if (piVar5[0x14] == 2) {
        DAT_004dc298 = 2;
      }
      (**(code **)*DAT_004e2b20)();
      FUN_00480290((int)this);
      pvVar2 = *(void **)((int)this + 0x24);
      uVar8 = *(undefined2 *)((int)pvVar2 + 0x1c);
      goto LAB_004481cf;
    }
    param_3 = operator_new(0xbd0);
    uStack_4 = 6;
    if (param_3 == (void *)0x0) goto LAB_0044829b;
    piVar5 = FUN_0045a370(param_3,*(int *)((int)this + 0x24),piVar5[0x14]);
    break;
  case 0x16:
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 == 0xd4) {
      ExceptionList = local_c;
      return 1;
    }
    if (piVar5[0x13] == 1) {
      pvVar2 = operator_new(0x32c);
      uStack_4 = 3;
      param_3 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        puVar3 = FUN_00468110(DAT_004e2b14,&param_1,"DATA\\Maps");
        iVar1 = *(int *)((int)this + 0x24);
        uVar10 = 1;
        uVar9 = 1;
        puVar7 = "ssf";
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        puVar4 = (uchar *)FUN_00465e00(puVar3);
        piVar5 = FUN_004472e0(pvVar2,iVar1,0,puVar4,puVar7,uVar9,uVar10);
      }
      uStack_4 = 0xffffffff;
      if (pvVar2 == (void *)0x0) goto LAB_00448152;
      ppiVar6 = &param_1;
    }
    else {
      if (piVar5[0x13] != 2) {
        ExceptionList = local_c;
        return 1;
      }
      pvVar2 = operator_new(0x32c);
      uStack_4 = 0;
      param_3 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        puVar3 = FUN_00468110(DAT_004e2b14,(undefined4 *)&param_2,"DATA\\Maps");
        iVar1 = *(int *)((int)this + 0x24);
        uVar10 = 1;
        uVar9 = 2;
        puVar7 = "smf";
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        puVar4 = (uchar *)FUN_00465e00(puVar3);
        piVar5 = FUN_004472e0(pvVar2,iVar1,2,puVar4,puVar7,uVar9,uVar10);
      }
      uStack_4 = 0xffffffff;
      if (pvVar2 == (void *)0x0) goto LAB_00448152;
      ppiVar6 = (int **)&param_2;
    }
    uStack_4 = 0xffffffff;
    FUN_00465e40(ppiVar6);
LAB_00448152:
    (**(code **)(*piVar5 + 0xb8))();
    ExceptionList = local_c;
    return 1;
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar5 + 0xb8))();
switchD_00448029_caseD_a:
  ExceptionList = local_c;
  return 0;
}

