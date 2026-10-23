// FUNCTION: PORT1111 0x0046ee80
// name: FUN_0046ee80
// sig: undefined4 FUN_0046ee80(int param_1)


undefined4 __fastcall FUN_0046ee80(int param_1)

{
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  void *this;
  int iVar4;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x68) = 1;
  local_10 = operator_new(0x30);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00477720(local_10);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x3c) = puVar1;
  FUN_00465cf0(&local_14);
  local_4 = 1;
  puVar2 = (uchar *)FUN_00465e00((undefined4 *)(*(int *)(param_1 + 0x48) + 0x10));
  FUN_00466a40(&local_14,puVar2);
  thunk_FUN_00466040(&local_14," - ");
  FUN_00466a30(&local_14,(undefined4 *)(param_1 + 0x24));
  puVar2 = (uchar *)FUN_00465e00(&local_14);
  iVar3 = FUN_00477a40(*(void **)(param_1 + 0x3c),puVar2);
  if (iVar3 == 0) {
    local_4 = 0xffffffff;
    FUN_00465e40(&local_14);
    ExceptionList = local_c;
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x18) = 0;
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar4 = -1;
  this = (void *)FUN_0047c5d0(*(int *)(param_1 + 0x48));
  FUN_00476a10(this,iVar3,iVar4);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  ExceptionList = local_c;
  return 1;
}

