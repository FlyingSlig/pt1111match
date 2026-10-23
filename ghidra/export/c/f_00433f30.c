// FUNCTION: PORT1111 0x00433f30
// name: FUN_00433f30
// sig: undefined FUN_00433f30(undefined4 * param_1)


void __fastcall FUN_00433f30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7831;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bfd20;
  local_4 = 2;
  FUN_00433cf0((int)param_1);
  FUN_00419480((int)(param_1 + 0xe));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xf]);
}

