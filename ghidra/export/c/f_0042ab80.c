// FUNCTION: PORT1111 0x0042ab80
// name: FUN_0042ab80
// sig: undefined FUN_0042ab80(undefined4 * param_1)


void __fastcall FUN_0042ab80(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7150;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bf904;
  local_4 = 5;
  FUN_0042a630((int)param_1);
  local_4._0_1_ = 4;
  FUN_004216d0(param_1 + 0x25);
  if ((void *)param_1[0x1c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if ((void *)param_1[0x18] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_destructor_iterator_(param_1 + 8,0xc,5,FUN_00409650);
  FUN_00419480((int)(param_1 + 5));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[6]);
}

