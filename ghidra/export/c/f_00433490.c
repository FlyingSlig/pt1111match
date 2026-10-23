// FUNCTION: PORT1111 0x00433490
// name: FUN_00433490
// sig: undefined4 FUN_00433490(int param_1)


undefined4 __fastcall FUN_00433490(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_00;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b77c6;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x34) != 0) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_004147d0(*(int *)(param_1 + 0x14));
  this = *(void **)(DAT_004e26f0 + *(int *)(param_1 + 0x18) * 4);
  if ((*(int *)(param_1 + 0x24) == 0) && (*(uint *)((int)this + 0x38) < *(uint *)(iVar1 + 0x110))) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00423080(this,iVar1,1,1);
    }
    if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(iVar1 + 0x2a8) == 6)) {
      iVar2 = FUN_00429ac0(DAT_004e2404,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20));
      FUN_004426d0(DAT_004e2420,iVar1,iVar2,(int)this,1);
    }
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)((int)DAT_004e240c + 0x60) == 1) {
    puVar3 = operator_new(0x18);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0045c3d0(puVar3);
    }
    *(undefined4 *)(iVar2 + 8) = 0xfffffffe;
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    local_4 = 0xffffffff;
    FUN_004456a0(*(void **)((int)DAT_004e240c + 0x70),iVar2);
  }
  iVar2 = FUN_0042b210(DAT_004e2404,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20),
                       *(undefined4 **)(param_1 + 0x14),(char)*(undefined4 *)(param_1 + 0x18));
  if ((iVar2 < 0) ||
     ((*(int *)(param_1 + 0x24) == 0 &&
      (iVar4 = FUN_00453460((void *)((int)DAT_004e2410 + 0x888),*(int *)((int)this + 0x34),
                            *(uint *)(iVar1 + 0x110)), iVar4 == 0)))) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00423080(this,iVar1,1,1);
    }
    if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(iVar1 + 0x2a8) == 6)) {
      iVar2 = FUN_00429ac0(DAT_004e2404,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20));
      FUN_004426d0(DAT_004e2420,iVar1,iVar2,(int)this,1);
    }
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == DAT_004e26fc) {
    FUN_0044d700(*(int *)(iVar1 + 0x240),*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1,
                 -1);
  }
  if (*(int *)(iVar1 + 0x48) == 4) {
    switch(*(undefined4 *)(iVar1 + 0x14)) {
    case 0x1a:
    case 0x1b:
    case 0x23:
    case 0x24:
    case 0x37:
    case 0x38:
    case 0x43:
    case 0x44:
      if (DAT_004e2800 == (void *)0x0) goto LAB_004336c0;
      iVar4 = 1;
      break;
    default:
      if (DAT_004e2800 == (void *)0x0) goto LAB_004336c0;
      iVar4 = 2;
    }
    FUN_0044bf90(DAT_004e2800,iVar4);
  }
LAB_004336c0:
  this_00 = (int *)FUN_00414c30((int)DAT_004e240c);
  if (-1 < *(int *)(param_1 + 4)) {
    puVar3 = operator_new(0x44);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00430480(puVar3);
    }
    piVar5[1] = *(int *)(param_1 + 4);
    piVar5[5] = iVar2;
    piVar5[6] = 0;
    local_4 = 0xffffffff;
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_00415f40(DAT_004e240c,piVar5);
    }
    else {
      FUN_00412e90(piVar5);
    }
    iVar4 = FUN_00414c30((int)DAT_004e240c);
    if (iVar4 != 0) {
      FUN_00444ee0(*(void **)(iVar4 + 0xb0),*(int *)(param_1 + 0xc),iVar2);
    }
  }
  if (this_00 != (int *)0x0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_00405c90(this_00,0);
    }
    else {
      this_00[0x2a] = 1;
    }
    if ((*(byte *)(this_00 + 0xf) & 4) != 0) {
      FUN_00405c90(this_00,1);
      FUN_00405d00(this_00,0);
      FUN_00454e30(DAT_004e2410,0);
    }
    if ((*(int *)(iVar1 + 0x2a8) == 6) && (*(int *)(param_1 + 0x30) == 0)) {
      FUN_00442830(DAT_004e2420,this_00,0);
    }
    FUN_004137d0((int)this_00);
  }
  ExceptionList = local_c;
  return 1;
}

