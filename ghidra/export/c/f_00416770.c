// FUNCTION: PORT1111 0x00416770
// name: FUN_00416770
// sig: undefined FUN_00416770(void * this, int * param_1, undefined4 param_2, int param_3)


void __thiscall FUN_00416770(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b643d;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x74) != 0) goto switchD_004167ed_default;
  ExceptionList = &local_c;
  FUN_00403d10(&local_14,*param_1,param_1[1]);
  FUN_00478700(*(void **)((int)this + 0x34),local_14,local_10);
  if ((*(int *)((int)this + 0x50) == 0) &&
     (iVar1 = FUN_00415340(this,&local_14,param_3), iVar1 == 0)) {
    ExceptionList = local_c;
    return;
  }
  switch(*(undefined4 *)((int)this + 0x50)) {
  case 1:
    pvVar2 = operator_new(0xd8);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00431b50(pvVar2,0);
    }
    piVar4[5] = local_14;
    piVar4[6] = local_10;
    local_4 = 0xffffffff;
    FUN_00415f40(this,piVar4);
    goto switchD_004167ed_default;
  case 2:
    pvVar2 = operator_new(0xd8);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00431b50(pvVar2,0);
    }
    piVar4[5] = local_14;
    piVar4[6] = local_10;
    local_4 = 0xffffffff;
    FUN_00415f40(this,piVar4);
    iVar1 = *(int *)((int)this + 0x54);
    goto LAB_00416988;
  case 3:
    puVar3 = operator_new(0x44);
    local_4 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      iVar1 = *(int *)(*(int *)((int)this + 0x54) + 0x10);
      piVar4 = (int *)0x0;
      uRam00000008 = 4;
    }
    else {
      piVar4 = FUN_0042fdb0(puVar3);
      iVar1 = *(int *)(*(int *)((int)this + 0x54) + 0x10);
      piVar4[2] = 4;
    }
    goto LAB_0041696f;
  case 4:
    puVar3 = operator_new(0x44);
    local_4 = 3;
    if (puVar3 == (undefined4 *)0x0) {
LAB_00416967:
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00431490(puVar3);
    }
    break;
  case 5:
    puVar3 = operator_new(0x44);
    local_4 = 4;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00416967;
    piVar4 = FUN_00432330(puVar3);
    break;
  case 6:
    puVar3 = operator_new(0x44);
    local_4 = 5;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00416967;
    piVar4 = FUN_00430f00(puVar3);
    break;
  case 7:
    puVar3 = operator_new(0x44);
    local_4 = 6;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00416967;
    piVar4 = FUN_00430480(puVar3);
    break;
  default:
    goto switchD_004167ed_default;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x54) + 0x10);
LAB_0041696f:
  piVar4[5] = iVar1;
  local_4 = 0xffffffff;
  FUN_00415f40(this,piVar4);
  iVar1 = *(int *)((int)this + 0x54);
LAB_00416988:
  FUN_004134c0(this,iVar1,0);
switchD_004167ed_default:
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  ExceptionList = local_c;
  return;
}

