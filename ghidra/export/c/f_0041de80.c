// FUNCTION: PORT1111 0x0041de80
// name: FUN_0041de80
// sig: undefined FUN_0041de80(undefined4 * param_1)


void __fastcall FUN_0041de80(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6a89;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004bf6b4;
  local_4 = 3;
  FUN_0047c1e0(param_1 + 0x1b);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0041dc00((int)(param_1 + 0x17));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x18]);
}

