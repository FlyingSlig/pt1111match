// FUNCTION: PORT1111 0x004325f0
// name: FUN_004325f0
// sig: undefined4 FUN_004325f0(int param_1)


undefined4 __fastcall FUN_004325f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b764b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00414c30(DAT_004e240c);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0xd8);
  if (0 < iVar1) {
    iVar4 = 10;
    if (iVar1 < 10) {
      iVar4 = iVar1;
    }
    *(int *)(iVar2 + 0xd8) = iVar1 - iVar4;
    *(int *)(iVar2 + 0xdc) = *(int *)(iVar2 + 0xdc) + iVar4;
    FUN_00454e60(DAT_004e2410);
    if (0 < *(int *)(iVar2 + 0xd8)) {
      puVar3 = operator_new(0x34);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_0042f760(puVar3);
        *puVar3 = &PTR_FUN_004bfbb0;
        puVar3[3] = 0x19;
      }
      puVar3[1] = *(undefined4 *)(param_1 + 4);
      local_4 = 0xffffffff;
      FUN_00412ec0(puVar3,10000);
    }
    FUN_00445030(*(void **)(iVar2 + 0xb0),0x3f6);
  }
  ExceptionList = local_c;
  return 1;
}

