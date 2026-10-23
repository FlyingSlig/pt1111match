// FUNCTION: PORT1111 0x0047a940
// name: FUN_0047a940
// sig: undefined FUN_0047a940(int param_1)


void __fastcall FUN_0047a940(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba30b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x10);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    *(void **)(param_1 + 0x14) = pvVar1;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return;
}

