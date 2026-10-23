// FUNCTION: PORT1111 0x004076c0
// name: FUN_004076c0
// sig: undefined FUN_004076c0(int param_1)


void __fastcall FUN_004076c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *this;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5a0b;
  local_c = ExceptionList;
  iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 0x50);
  iVar2 = *(int *)(param_1 + 0x4c);
  if ((iVar2 < *(int *)(iVar4 + 0x124)) && (this = (undefined4 *)0x0, iVar4 != 0)) {
    if (iVar2 == *(int *)(iVar4 + 0x124) + -1) {
      iVar4 = *(int *)(iVar4 + 300);
      ExceptionList = &local_c;
    }
    else if (iVar2 == 0) {
      iVar4 = 1;
      ExceptionList = &local_c;
    }
    else {
      ExceptionList = &local_c;
      iVar2 = _rand();
      iVar4 = iVar2 % (*(int *)(iVar4 + 300) + -2) + 2;
    }
    piVar1 = (int *)(*(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x24) + 0x14)
                                                          + 4) + 0xc) + 0xc) + 0x48) +
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x50) + 0x128) +
                    *(int *)(param_1 + 0x4c)) * 0xc);
    puVar3 = operator_new(0x20);
    local_4 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      this = FUN_0040a2e0(puVar3);
    }
    local_4 = 0xffffffff;
    FUN_0040a350(this,iVar4,*(int *)(param_1 + 0x34),*piVar1,piVar1[1]);
    *(undefined4 **)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c) * 4) = this;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  ExceptionList = local_c;
  return;
}

