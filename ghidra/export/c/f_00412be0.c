// FUNCTION: PORT1111 0x00412be0
// name: FUN_00412be0
// sig: bool FUN_00412be0(void * this, int param_1)


bool __thiscall FUN_00412be0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  void *this_01;
  int iVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  this_00 = *(void **)(param_1 + 0x40);
  iVar7 = *(int *)((int)this_00 + 0x50);
  this_01 = (void *)(**(code **)(*(int *)this + 0x88))();
  iVar7 = FUN_00422380(this_01,iVar7);
  if (iVar7 == 0) {
    bVar6 = FUN_00412b80(this,*(int *)(param_1 + 0x40));
    return bVar6;
  }
  iVar7 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(iVar7 + 0x3c);
  iVar4 = *(int *)(iVar7 + 0x34);
  iVar5 = *(int *)(iVar7 + 0x40);
  iVar11 = *(int *)(iVar7 + 0x38) + -1;
  iVar7 = iVar11;
  if (iVar11 <= iVar5) {
    do {
      if ((iVar7 == iVar11) || (iVar7 == iVar5)) {
        for (iVar8 = iVar4 + -1; iVar8 <= iVar3; iVar8 = iVar8 + 1) {
          if (((iVar8 != 0) || (iVar7 != 0)) &&
             (iStack_10 = iVar8, iStack_c = iVar7, iVar9 = FUN_004267d0(this_00,&iStack_10),
             iVar9 != 0)) {
            iVar9 = *(int *)(iVar9 + 0x50);
            iVar10 = (**(code **)(*(int *)this + 0x88))();
            iVar9 = *(int *)(*(int *)(iVar10 + 0x1fc) + iVar9 * 4);
            sVar1 = *(short *)(*(int *)((int)this + 0x40) + 0x4c);
            sVar2 = *(short *)(*(int *)((int)this + 0x40) + 0x4e);
            iVar10 = (**(code **)(*(int *)this + 0x88))();
            if (iVar9 == *(int *)(*(int *)(iVar10 + 0x1fc) +
                                 (*(int *)(iVar10 + 100) * (int)sVar1 + (int)sVar2) * 4)) {
              return true;
            }
          }
        }
      }
      else {
        iStack_20 = iVar4 + -1;
        iStack_1c = iVar7;
        iVar8 = FUN_004267d0(this_00,&iStack_20);
        if (((iVar8 != 0) && (bVar6 = FUN_00412b80(this,iVar8), CONCAT31(extraout_var,bVar6) != 0))
           || ((iStack_18 = iVar3, iStack_14 = iVar7, iVar8 = FUN_004267d0(this_00,&iStack_18),
               iVar8 != 0 &&
               (bVar6 = FUN_00412b80(this,iVar8), CONCAT31(extraout_var_00,bVar6) != 0)))) {
          return true;
        }
      }
      iVar7 = iVar7 + 1;
      if (iVar5 < iVar7) {
        return false;
      }
    } while( true );
  }
  return false;
}

