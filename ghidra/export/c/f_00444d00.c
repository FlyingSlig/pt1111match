// FUNCTION: PORT1111 0x00444d00
// name: FUN_00444d00
// sig: undefined FUN_00444d00(void * param_1)


void __fastcall FUN_00444d00(void *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  bVar2 = FUN_0043dc50(*(int *)(*(int *)((int)param_1 + 0x18) + 0x50) + 0x270);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar4 = *(int *)((int)param_1 + 0x28);
    if (iVar4 == 0) {
      iVar4 = 0x7d3;
    }
    else if (iVar4 < 1) {
      if (5 < iVar4) goto LAB_00444d41;
LAB_00444d4d:
      iVar4 = 0x7d5;
    }
    else if (iVar4 < 6) {
      iVar4 = 0x7d4;
    }
    else {
LAB_00444d41:
      if (0x14 < iVar4) goto LAB_00444d4d;
      iVar4 = 0x7d6;
    }
    iVar4 = FUN_00444c80(param_1,0x3ec,iVar4);
    if (iVar4 != 0) {
      bVar1 = true;
    }
  }
  bVar2 = FUN_0043dc50(*(int *)(*(int *)((int)param_1 + 0x18) + 0x50) + 0x270);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    iVar3 = (**(code **)(**(int **)((int)param_1 + 0x18) + 0x88))();
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x18) + 0x40);
    iVar4 = FUN_0043b070(DAT_004e2408,(int)*(short *)(iVar4 + 0x4e),(int)*(short *)(iVar4 + 0x4c),
                         *(int *)(iVar3 + 0x34));
    if (iVar4 < 0) {
      iVar4 = 0x7d1;
    }
    else {
      iVar4 = 0x7d2;
    }
    iVar4 = FUN_00444c80(param_1,0x3fa,iVar4);
    if (iVar4 != 0) goto LAB_00444dcf;
  }
  if (!bVar1) {
    return;
  }
LAB_00444dcf:
  FUN_004137d0(*(int *)((int)param_1 + 0x18));
  return;
}

