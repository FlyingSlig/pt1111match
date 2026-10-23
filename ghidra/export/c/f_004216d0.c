// FUNCTION: PORT1111 0x004216d0
// name: FUN_004216d0
// sig: undefined FUN_004216d0(undefined4 * param_1)


void __fastcall FUN_004216d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6c8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bf738;
  local_4 = 0;
  FUN_004215b0((int)param_1);
  FUN_00419480((int)(param_1 + 2));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[3]);
}

