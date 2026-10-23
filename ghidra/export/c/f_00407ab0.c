// FUNCTION: PORT1111 0x00407ab0
// name: FUN_00407ab0
// sig: undefined FUN_00407ab0(int param_1)


void __fastcall FUN_00407ab0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((*(int *)(param_1 + 0x7c) == 0) &&
      (iVar1 = *(int *)(param_1 + 0x50), *(int *)(iVar1 + 0xfc) <= *(int *)(param_1 + 0xfc))) &&
     (0 < *(int *)(iVar1 + 0x124))) {
    iVar1 = *(int *)(iVar1 + 0x124);
    uVar2 = FUN_00497d88();
    FUN_004077b0(*(void **)(param_1 + 0x60),iVar1 - (int)uVar2);
  }
  return;
}

