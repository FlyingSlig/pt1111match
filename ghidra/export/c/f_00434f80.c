// FUNCTION: PORT1111 0x00434f80
// name: FUN_00434f80
// sig: undefined4 FUN_00434f80(void * this, undefined4 param_1, int param_2, undefined4 param_3, int param_4)


undefined4 __thiscall
FUN_00434f80(void *this,undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b799c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = _rand();
  iVar1 = iVar1 % 0x14;
  iVar6 = *(int *)(param_4 + 4);
  uVar2 = _rand();
  if ((uVar2 & 1) != 0) {
    iVar1 = -iVar1;
  }
  switch(*(undefined4 *)((int)this + 0x18)) {
  case 0:
    this_00 = operator_new(0x40);
    piVar5 = (int *)0x0;
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar5 = FUN_00410930(this_00,param_3);
    }
    local_4 = 0xffffffff;
    puVar4 = operator_new(0x6c);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00411140(puVar4);
    }
    local_4 = -1;
    iVar3 = (**(code **)(*piVar5 + 0x20))
                      (0,*(undefined4 *)((int)this + 0x20),puVar4,param_1,param_2);
    if (iVar3 != 0) {
      iVar3 = *(int *)((int)this + 0x24);
      piVar5[0xe] = *(int *)((int)this + 0x14);
      piVar5[0xc] = iVar6 + iVar1;
      piVar5[0xd] = local_4;
      piVar5[10] = iVar3;
      piVar5[0xb] = *(int *)((int)this + 0x1c);
      (**(code **)(*(int *)piVar5[7] + 0x28))();
      ExceptionList = unaff_EDI;
      return 1;
    }
    break;
  default:
    goto switchD_00434fe3_caseD_1;
  case 0x6c:
  case 0x71:
  case 0x77:
  case 0x78:
    puVar4 = operator_new(0x3c);
    local_4 = 2;
    if (puVar4 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_004108f0(puVar4);
    }
    local_4 = 0xffffffff;
    puVar4 = operator_new(0x58);
    local_4 = 3;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00411030(puVar4);
    }
    local_4 = -1;
    iVar6 = (**(code **)(*piVar5 + 0x20))
                      (*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x20),puVar4,
                       param_1);
    if (iVar6 != 0) {
      iVar6 = *(int *)((int)this + 0x24);
      piVar5[0xe] = *(int *)((int)this + 0x14);
      piVar5[0xd] = local_4;
      piVar5[0xc] = param_2;
      piVar5[10] = iVar6;
      piVar5[0xb] = *(int *)((int)this + 0x1c);
      (**(code **)(*(int *)piVar5[7] + 0x28))();
      ExceptionList = unaff_EDI;
      return 1;
    }
  }
  FUN_00411c40((int)piVar5);
  (**(code **)*piVar5)(1);
switchD_00434fe3_caseD_1:
  ExceptionList = local_c;
  return 0;
}

