// FUNCTION: PORT1111 0x0044a2b0
// name: FUN_0044a2b0
// sig: undefined FUN_0044a2b0(undefined4 * param_1)


void __fastcall FUN_0044a2b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b89a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c4340;
  local_4 = 1;
  FUN_00473f60(param_1 + 0x45);
  local_4 = local_4 & 0xffffff00;
  FUN_00446040(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_00480b10(param_1);
  ExceptionList = pvStack_c;
  return;
}

