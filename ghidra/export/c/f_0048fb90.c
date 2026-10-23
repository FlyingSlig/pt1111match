// FUNCTION: PORT1111 0x0048fb90
// name: FUN_0048fb90
// sig: undefined FUN_0048fb90(void * param_1, int * param_2, int * param_3, int param_4, undefined4 * param_5)


void __cdecl FUN_0048fb90(void *param_1,int *param_2,int *param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *local_8;
  int local_4;
  
  iVar11 = param_4;
  piVar4 = (int *)*param_2;
  iVar8 = param_2[1];
  iVar9 = param_3[1];
  piVar3 = (int *)*param_3;
  iVar7 = 0;
  param_2 = (int *)0x0;
  *param_5 = 0;
  iVar1 = iVar9;
  piVar10 = piVar4;
  local_8 = piVar4;
  local_4 = iVar8;
  if (iVar9 < iVar8) {
    local_8 = (int *)*param_3;
    local_4 = param_3[1];
    *param_5 = 1;
    iVar1 = iVar8;
    piVar10 = piVar3;
    iVar8 = iVar9;
    piVar3 = piVar4;
  }
  iVar9 = (int)piVar3 - (int)piVar10;
  if (iVar9 < 0) {
    puVar6 = (undefined4 *)0xffffffff;
    param_5 = (undefined4 *)0xffffffff;
    iVar9 = -iVar9;
  }
  else {
    param_5 = (undefined4 *)0x1;
    puVar6 = (undefined4 *)0x1;
  }
  iVar1 = iVar1 - iVar8;
  if (iVar9 == 0) {
    if (-1 < iVar1) {
      iVar9 = 0;
      local_8 = piVar10;
      do {
        iVar7 = iVar7 + 1;
        local_4 = iVar9 + iVar8;
        if (iVar7 == param_4) {
          iVar7 = 0;
          FUN_0040fdf0(param_1,&local_8);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= iVar1);
      return;
    }
  }
  else if (iVar1 == 0) {
    if (-1 < iVar9) {
      iVar9 = iVar9 + 1;
      local_4 = iVar8;
      do {
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar11) {
          iVar7 = 0;
          local_8 = piVar10;
          FUN_0040fdf0(param_1,&local_8);
          puVar6 = param_5;
        }
        piVar10 = (int *)((int)piVar10 + (int)puVar6);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return;
    }
  }
  else if (iVar9 == iVar1) {
    iVar11 = 0;
    if (-1 < iVar9) {
      do {
        iVar7 = iVar7 + 1;
        local_4 = iVar11 + iVar8;
        param_2 = piVar10;
        if (iVar7 == param_4) {
          iVar7 = 0;
          local_8 = piVar10;
          FUN_0040fdf0(param_1,&local_8);
          puVar6 = param_5;
        }
        iVar11 = iVar11 + 1;
        piVar10 = (int *)((int)param_2 + (int)puVar6);
      } while (iVar11 <= iVar9);
      return;
    }
  }
  else {
    if (iVar1 <= iVar9) {
      uVar2 = iVar9 / iVar1;
      iVar8 = (iVar9 % iVar1) * 2;
      iVar9 = iVar9 % iVar1 + iVar1 * -2;
      param_3 = (int *)(((int)uVar2 >> 1) + 1);
      piVar4 = param_3;
      if (((iVar8 == 0) && (piVar4 = (int *)((int)uVar2 >> 1), piVar3 = param_3, (uVar2 & 1) != 0))
         || (piVar3 = piVar4, (uVar2 & 1) != 0)) {
        iVar9 = iVar9 + iVar1;
      }
      FUN_0048fa20(param_1,(int *)&local_8,(int)puVar6,(int)piVar3,param_4,(int *)&param_2);
      iVar11 = iVar1 + -1;
      if (0 < iVar11) {
        do {
          iVar9 = iVar9 + iVar8;
          uVar5 = uVar2;
          if (0 < iVar9) {
            uVar5 = uVar2 + 1;
            iVar9 = iVar9 + iVar1 * -2;
          }
          FUN_0048fa20(param_1,(int *)&local_8,(int)param_5,uVar5,param_4,(int *)&param_2);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      FUN_0048fa20(param_1,(int *)&local_8,(int)param_5,(int)param_3,param_4,(int *)&param_2);
      return;
    }
    uVar2 = iVar1 / iVar9;
    iVar8 = (iVar1 % iVar9) * 2;
    iVar11 = iVar1 % iVar9 + iVar9 * -2;
    param_3 = (int *)(((int)uVar2 >> 1) + 1);
    piVar4 = param_3;
    if (((iVar8 == 0) && (piVar4 = (int *)((int)uVar2 >> 1), piVar3 = param_3, (uVar2 & 1) != 0)) ||
       (piVar3 = piVar4, (uVar2 & 1) != 0)) {
      iVar11 = iVar11 + iVar9;
    }
    FUN_0048fad0(param_1,(int *)&local_8,(int)puVar6,(int)piVar3,param_4,(int *)&param_2);
    iVar1 = iVar9 + -1;
    if (0 < iVar1) {
      do {
        iVar11 = iVar11 + iVar8;
        uVar5 = uVar2;
        if (0 < iVar11) {
          uVar5 = uVar2 + 1;
          iVar11 = iVar11 + iVar9 * -2;
        }
        FUN_0048fad0(param_1,(int *)&local_8,(int)param_5,uVar5,param_4,(int *)&param_2);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_0048fad0(param_1,(int *)&local_8,(int)param_5,(int)param_3,param_4,(int *)&param_2);
  }
  return;
}

