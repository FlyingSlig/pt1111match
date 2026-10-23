// FUNCTION: PORT1111 0x0045cae0
// name: FUN_0045cae0
// sig: undefined FUN_0045cae0(undefined4 * param_1)


void __fastcall FUN_0045cae0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b95f4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c4ae4;
  local_4 = 4;
  FUN_0045c8b0((int)param_1);
  FUN_00419480((int)(param_1 + 0xd));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xe]);
}

