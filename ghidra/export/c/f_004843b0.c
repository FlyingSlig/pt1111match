// FUNCTION: PORT1111 0x004843b0
// name: FUN_004843b0
// sig: undefined4 * FUN_004843b0(undefined4 * param_1)


undefined4 * __fastcall FUN_004843b0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c69f0;
  param_1[6] = 0;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    uVar2 = FUN_0043d220();
    *(undefined4 *)((int)pvVar1 + 4) = uVar2;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  param_1[3] = pvVar1;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  ExceptionList = local_c;
  return param_1;
}

