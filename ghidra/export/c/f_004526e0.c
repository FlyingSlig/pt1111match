// FUNCTION: PORT1111 0x004526e0
// name: FUN_004526e0
// sig: undefined4 FUN_004526e0(void * this, uint param_1, short param_2)


undefined4 __thiscall FUN_004526e0(void *this,uint param_1,short param_2)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8c6b;
  local_c = ExceptionList;
  if (param_2 == 3) {
    ExceptionList = &local_c;
    FUN_0047d0a0(*(void **)((int)this + 0x798),param_1 & 0xffff);
    piVar5 = (int *)FUN_00414c30(DAT_004e240c);
    if ((piVar5 != (int *)0x0) && (iVar3 = FUN_004056a0((int)piVar5), iVar3 == 0)) {
      SVar1 = GetKeyState(0x10);
      if (SVar1 < 0) {
        FUN_00453a00(*(void **)(DAT_004e240c + 0x21c),piVar5);
      }
      else {
        FUN_00453950(*(int *)(DAT_004e240c + 0x21c));
        FUN_00453f50(*(void **)(DAT_004e240c + 0x21c),piVar5);
      }
    }
    ExceptionList = local_c;
    return 1;
  }
  if (((param_2 != 4) ||
      (ExceptionList = &local_c,
      uVar2 = FUN_0047d0a0(*(void **)((int)this + 0x79c),param_1 & 0xffff), uVar2 == 0)) ||
     (*(int *)(uVar2 + 0x5c) == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = FUN_00453b70(*(int *)(DAT_004e240c + 0x21c));
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = FUN_004056a0(iVar3);
  if (iVar4 != 0) {
    ExceptionList = local_c;
    return 1;
  }
  this_00 = operator_new(0x34);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00452000(this_00,*(undefined4 *)(uVar2 + 0x5c));
  }
  piVar5[1] = *(int *)(iVar3 + 0x10);
  local_4 = 0xffffffff;
  FUN_00412e90(piVar5);
  ExceptionList = local_c;
  return 1;
}

