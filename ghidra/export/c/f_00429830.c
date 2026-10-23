// FUNCTION: PORT1111 0x00429830
// name: FUN_00429830
// sig: undefined4 FUN_00429830(void * this, int param_1, int param_2, int param_3, int param_4, void * param_5)


undefined4 __thiscall
FUN_00429830(void *this,int param_1,int param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  
  iVar1 = FUN_00419170((int)param_5);
  if (iVar1 == 0) {
    local_14 = (*(char *)((int)param_5 + 0x54) != '\0') + 1;
  }
  else {
    local_14 = 0;
  }
  iVar1 = (*(int *)((int)param_5 + 0x34) - param_3) + param_1;
  iVar8 = (*(int *)((int)param_5 + 0x38) - param_4) + param_2;
  uVar4 = *(int *)((int)param_5 + 0x3c) + param_1 + param_3;
  uVar5 = *(int *)((int)param_5 + 0x40) + param_2 + param_4;
  if ((((-1 < iVar1) && (-1 < iVar8)) && (uVar4 < *(uint *)((int)this + 0x10c))) &&
     (uVar5 < *(uint *)((int)this + 0x110))) {
    for (iVar7 = iVar8; iVar6 = iVar1, iVar7 < param_4 + iVar8; iVar7 = iVar7 + 1) {
      for (; iVar6 < (int)uVar4; iVar6 = iVar6 + 1) {
        iVar2 = FUN_00428400((*(int *)((int)this + 0x10c) * iVar7 + iVar6) * 0x6c +
                             *(int *)((int)this + 0x118));
        if (local_14 < iVar2) {
          return 0;
        }
      }
    }
    iVar6 = uVar5 - param_4;
    if (iVar7 < iVar6) {
      param_4 = (iVar7 - iVar8) - param_3;
      iVar8 = iVar1;
      do {
        for (; iVar8 < iVar1 + param_3; iVar8 = iVar8 + 1) {
          iVar2 = FUN_00428400((*(int *)((int)this + 0x10c) * iVar7 + iVar8) * 0x6c +
                               *(int *)((int)this + 0x118));
          if (local_14 < iVar2) {
            return 0;
          }
        }
        if (iVar8 < (int)(uVar4 - param_3)) {
          iVar2 = (iVar8 - iVar1) - param_3;
          do {
            iVar3 = FUN_00418fd0(param_5,iVar2,param_4);
            if ((iVar3 != 0) &&
               (iVar3 = FUN_00428400((*(int *)((int)this + 0x10c) * iVar7 + iVar8) * 0x6c +
                                     *(int *)((int)this + 0x118)), local_14 < iVar3)) {
              return 0;
            }
            iVar8 = iVar8 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar8 < (int)(uVar4 - param_3));
        }
        for (; iVar8 < (int)uVar4; iVar8 = iVar8 + 1) {
          iVar2 = FUN_00428400((*(int *)((int)this + 0x10c) * iVar7 + iVar8) * 0x6c +
                               *(int *)((int)this + 0x118));
          if (local_14 < iVar2) {
            return 0;
          }
        }
        iVar7 = iVar7 + 1;
        param_4 = param_4 + 1;
        iVar8 = iVar1;
      } while (iVar7 < iVar6);
    }
    do {
      iVar8 = iVar1;
      if ((int)uVar5 <= iVar7) {
        return 1;
      }
      for (; iVar8 < (int)uVar4; iVar8 = iVar8 + 1) {
        iVar6 = FUN_00428400((*(int *)((int)this + 0x10c) * iVar7 + iVar8) * 0x6c +
                             *(int *)((int)this + 0x118));
        if (local_14 < iVar6) {
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
  return 0;
}

