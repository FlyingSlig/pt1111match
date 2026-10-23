// FUNCTION: PORT1111 0x0047b780
// name: FUN_0047b780
// sig: undefined FUN_0047b780(void * this, int * param_1, undefined4 param_2, undefined2 * param_3, int param_4, int param_5, int param_6, int param_7)


void __thiscall
FUN_0047b780(void *this,int *param_1,undefined4 param_2,undefined2 *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_retaddr;
  
  param_3 = (undefined2 *)((int)param_3 >> 1);
  iVar2 = (**(code **)(*param_1 + 8))();
  iVar3 = (**(code **)(*param_1 + 4))();
  SetRect(this,0,0,iVar3 + -1,iVar2 + -1);
  iVar3 = FUN_0047b2c0(this,&param_4,&param_5,&param_6,&param_7);
  iVar2 = param_4;
  if (iVar3 != 0) {
    iVar3 = param_7;
    iVar9 = param_6;
    iVar8 = param_5;
    if (param_7 < param_5) {
      param_4 = param_6;
      iVar3 = param_5;
      iVar9 = iVar2;
      iVar8 = param_7;
    }
    param_3 = (undefined2 *)(**(code **)(*param_1 + 0x2c))(param_2,param_4,iVar8);
    iVar9 = iVar9 - (int)param_1;
    if (iVar9 < 0) {
      iVar2 = -1;
      param_1 = (int *)0xffffffff;
      iVar9 = -iVar9;
    }
    else {
      param_1 = (int *)0x1;
      iVar2 = 1;
    }
    iVar3 = iVar3 - iVar8;
    uVar1 = (undefined2)param_5;
    if (iVar9 == 0) {
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        do {
          *param_3 = (undefined2)param_5;
          param_3 = param_3 + unaff_retaddr;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
    }
    else if (iVar3 == 0) {
      if (-1 < iVar9) {
        iVar9 = iVar9 + 1;
        do {
          *param_3 = (undefined2)param_5;
          param_3 = param_3 + iVar2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        return;
      }
    }
    else if (iVar9 == iVar3) {
      if (-1 < iVar9) {
        iVar9 = iVar9 + 1;
        do {
          *param_3 = (undefined2)param_5;
          param_3 = param_3 + iVar2 + unaff_retaddr;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        return;
      }
    }
    else {
      if (iVar3 <= iVar9) {
        uVar4 = iVar9 / iVar3;
        iVar8 = (iVar9 % iVar3) * 2;
        iVar7 = iVar9 % iVar3 + iVar3 * -2;
        param_4 = ((int)uVar4 >> 1) + 1;
        iVar9 = param_4;
        if (((iVar8 == 0) && (iVar9 = (int)uVar4 >> 1, iVar5 = param_4, (uVar4 & 1) != 0)) ||
           (iVar5 = iVar9, (uVar4 & 1) != 0)) {
          iVar7 = iVar7 + iVar3;
        }
        FUN_0047b220((int *)&param_3,iVar5,iVar2,(undefined2)param_5,unaff_retaddr);
        iVar2 = iVar3 + -1;
        if (0 < iVar2) {
          do {
            iVar7 = iVar7 + iVar8;
            uVar6 = uVar4;
            if (0 < iVar7) {
              uVar6 = uVar4 + 1;
              iVar7 = iVar7 + iVar3 * -2;
            }
            FUN_0047b220((int *)&param_3,uVar6,(int)param_1,uVar1,unaff_retaddr);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_0047b220((int *)&param_3,param_4,(int)param_1,uVar1,unaff_retaddr);
        return;
      }
      uVar4 = iVar3 / iVar9;
      iVar2 = (iVar3 % iVar9) * 2;
      iVar8 = iVar3 % iVar9 + iVar9 * -2;
      param_4 = ((int)uVar4 >> 1) + 1;
      iVar3 = param_4;
      if (((iVar2 == 0) && (iVar3 = (int)uVar4 >> 1, iVar7 = param_4, (uVar4 & 1) != 0)) ||
         (iVar7 = iVar3, (uVar4 & 1) != 0)) {
        iVar8 = iVar8 + iVar9;
      }
      FUN_0047b270((int *)&param_3,iVar7,(int)param_1,(undefined2)param_5,unaff_retaddr);
      iVar3 = iVar9 + -1;
      if (0 < iVar3) {
        do {
          iVar8 = iVar8 + iVar2;
          uVar6 = uVar4;
          if (0 < iVar8) {
            uVar6 = uVar4 + 1;
            iVar8 = iVar8 + iVar9 * -2;
          }
          FUN_0047b270((int *)&param_3,uVar6,(int)param_1,uVar1,unaff_retaddr);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_0047b270((int *)&param_3,param_4,(int)param_1,uVar1,unaff_retaddr);
    }
  }
  return;
}

