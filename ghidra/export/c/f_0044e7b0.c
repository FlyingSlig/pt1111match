// FUNCTION: PORT1111 0x0044e7b0
// name: FUN_0044e7b0
// sig: undefined FUN_0044e7b0(int param_1)


void __fastcall FUN_0044e7b0(int param_1)

{
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b8b5e;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_0044e370(param_1);
  local_4._0_1_ = 1;
  *(undefined4 *)(param_1 + 0x1c) = &PTR_FUN_004c452c;
  FUN_00486190(param_1 + 0x1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0044dfb0((void *)(param_1 + 0xc),&uStack_10,(int *)**(int **)(param_1 + 0x10),
               *(int **)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x10));
}

