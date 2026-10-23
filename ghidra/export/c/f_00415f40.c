// FUNCTION: PORT1111 0x00415f40
// name: FUN_00415f40
// sig: undefined FUN_00415f40(void * this, int * param_1)


void __thiscall FUN_00415f40(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  bool bVar8;
  int *local_c;
  int local_8;
  int local_4;
  
  piVar4 = param_1;
  if (param_1[3] != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x21c) + 0x14) = 1;
    FUN_00453750(*(int *)((int)this + 0x21c));
  }
  if ((*(int *)(*(int *)((int)this + 0x21c) + 0x14) != 0) &&
     (piVar1 = *(int **)(*(int *)((int)this + 0x21c) + 4), piVar6 = (int *)*piVar1, piVar6 != piVar1
     )) {
    do {
      param_1 = (int *)piVar6[2];
      FUN_00413aa0((void *)((int)this + 4),&local_c,(int *)&param_1);
      if ((local_c != *(int **)((int)this + 8)) && ((int *)local_c[4] != (int *)0x0)) {
        FUN_004159b0((int *)local_c[4]);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(*(int *)((int)this + 0x21c) + 4));
  }
  if ((piVar4[3] == 0) && (iVar5 = FUN_00453880(*(int *)((int)this + 0x21c)), iVar5 != 0)) {
    FUN_00454920(*(int *)((int)this + 0x21c));
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x21c) + 4);
  param_1 = (int *)*piVar1;
  local_c = (int *)0x0;
  bVar3 = false;
  if (param_1 != piVar1) {
    do {
      bVar2 = false;
      local_8 = param_1[2];
      FUN_00413aa0((void *)((int)this + 4),&local_4,&local_8);
      if (((local_4 == *(int *)((int)this + 8)) ||
          (piVar1 = *(int **)(local_4 + 0x10), piVar1 == (int *)0x0)) ||
         (iVar5 = (**(code **)(*piVar1 + 0x88))(), *(int *)(iVar5 + 0x34) != DAT_004e26fc))
      goto LAB_0041613d;
      iVar5 = (**(code **)(*piVar4 + 0x14))();
      if ((iVar5 != 0) && (iVar5 = FUN_004050c0(piVar1,piVar4[0xd],piVar4[5]), iVar5 != 0)) {
        bVar2 = true;
      }
      switch(piVar4[3]) {
      case 0:
        bVar8 = *(char *)(piVar1[0x14] + 0x54) == '\0';
        break;
      default:
        goto switchD_00416085_caseD_1;
      case 4:
        cVar7 = *(char *)(piVar1[0x14] + 0x57);
        goto LAB_004160ae;
      case 6:
        cVar7 = *(char *)(piVar1[0x14] + 0x56);
LAB_004160ae:
        bVar8 = cVar7 == '\0';
        break;
      case 0xb:
      case 0xc:
        bVar8 = *(char *)(piVar1[0x14] + 0x58) == '\0';
      }
      if (!bVar8) {
switchD_00416085_caseD_1:
        if (piVar4[3] == 3) {
          if (*(char *)(piVar1[0x14] + 0x55) == '\0') goto LAB_0041613d;
          *(int *)(piVar1[0x2c] + 0x34) = piVar4[5];
        }
        else {
          *(undefined4 *)(piVar1[0x2c] + 0x34) = 0xffffffff;
        }
        if (!bVar2) {
          FUN_00405e60(piVar1);
          iVar5 = (**(code **)(*piVar1 + 0x2c))();
          if (iVar5 != 2) {
            if (((*(byte *)(piVar1 + 0xf) & 4) != 0) && (-1 < *(int *)(piVar1[0x14] + 0x230))) {
              local_c = piVar1;
            }
            piVar6 = (int *)(**(code **)(*piVar4 + 4))();
            piVar6[1] = piVar1[4];
            if (DAT_004e2424 == (void *)0x0) {
              (**(code **)*piVar6)(1);
            }
            else {
              FUN_00434760(DAT_004e2424,piVar6);
            }
            bVar3 = true;
          }
        }
      }
LAB_0041613d:
      param_1 = (int *)*param_1;
    } while (param_1 != *(int **)(*(int *)((int)this + 0x21c) + 4));
    if (bVar3) {
      if (*(int *)((int)this + 0x40) != 0) {
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x40) + 0x60) + 0x30) = 0;
      }
      *(undefined4 *)((int)this + 0x40) = 0;
      FUN_00478920(*(void **)((int)this + 0x34));
    }
    piVar1 = local_c;
    if ((local_c != (int *)0x0) &&
       ((piVar4[3] == 0 ||
        ((iVar5 = (**(code **)(*piVar4 + 0x14))(), iVar5 != 0 &&
         (iVar5 = FUN_004056a0((int)piVar1), iVar5 == 0)))))) {
      FUN_00405de0(piVar1,1);
    }
  }
  if (piVar4[3] == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x21c) + 0x14) = 0;
  }
  (**(code **)*piVar4)(1);
  return;
}

