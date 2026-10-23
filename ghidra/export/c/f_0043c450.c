// FUNCTION: PORT1111 0x0043c450
// name: FUN_0043c450
// sig: int FUN_0043c450(int param_1)


int __fastcall FUN_0043c450(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *this;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack00000004;
  int iStack_c;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  iVar8 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x88))();
    iVar2 = *(int *)(iVar2 + 0x34);
    iVar6 = 0;
    iStack00000004 = 0;
    iStack_c = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar3 = *(int *)(param_1 + 0x14);
        iVar7 = 0;
        if (0 < iVar3) {
          do {
            if ((((iVar8 < 0) || (iVar7 < 0)) || (*(int *)(param_1 + 0x10) <= iVar8)) ||
               (iVar3 <= iVar7)) {
              this = (void *)0x0;
            }
            else {
              this = (void *)((*(int *)(param_1 + 0x10) * iVar7 + iVar8) * 0x30 +
                             *(int *)(param_1 + 4));
            }
            iVar3 = FUN_0043c7c0(this,iVar2);
            if (iVar3 < iVar6) {
              iVar6 = iVar3;
              iStack00000004 = iVar8;
              iStack_c = iVar7;
            }
            iVar3 = *(int *)(param_1 + 0x14);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x10));
    }
    uVar5 = iStack00000004 << 3;
    uVar4 = iStack_c << 3;
    if (iVar6 == 0) {
      uVar5 = (uint)*(short *)(piVar1[0x10] + 0x4e);
      uVar4 = (uint)*(short *)(piVar1[0x10] + 0x4c);
    }
    iVar8 = FUN_00429ac0(DAT_004e2404,uVar5,uVar4);
    return iVar8;
  }
  return 0;
}

