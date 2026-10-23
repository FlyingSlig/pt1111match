// FUNCTION: PORT1111 0x0040cb70
// name: FUN_0040cb70
// sig: undefined FUN_0040cb70(int param_1)


void __fastcall FUN_0040cb70(int param_1)

{
  int iVar1;
  DWORD DVar2;
  void *this;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5e4b;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x34);
  ExceptionList = &local_c;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 0x124) = DVar2;
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x120) == 0) {
    FUN_004789b0(*(void **)(param_1 + 0x54),(int *)0x0);
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x120) = 1;
    this = operator_new(0x34);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00434a30(this,2);
    }
    puVar3[5] = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10);
    local_4 = 0xffffffff;
    FUN_00412ec0(puVar3,500);
  }
  ExceptionList = local_c;
  return;
}

