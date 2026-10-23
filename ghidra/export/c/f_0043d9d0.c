// FUNCTION: PORT1111 0x0043d9d0
// name: FUN_0043d9d0
// sig: undefined4 FUN_0043d9d0(undefined4 param_1, void * param_2)


undefined4 __cdecl FUN_0043d9d0(undefined4 param_1,void *param_2)

{
  bool bVar1;
  uint uVar2;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7eb8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_004366b0(&param_1,0,in_stack_00000018,(byte *)"UNKNOWN",7);
  if (uVar2 == 0) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return 2000;
  }
  uVar2 = FUN_004366b0(&param_1,0,in_stack_00000018,&DAT_004c36f8,4);
  if (uVar2 == 0) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return 0x7d1;
  }
  uVar2 = FUN_004366b0(&param_1,0,in_stack_00000018,(byte *)"FALSE",5);
  if (uVar2 == 0) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return 0x7d2;
  }
  bVar1 = FUN_0043d830(&param_1,&DAT_004c36d8);
  if (bVar1) {
    FUN_0044d7b0((int)&param_1);
    ExceptionList = local_c;
    return 0x7d3;
  }
  bVar1 = FUN_0043d830(&param_1,&DAT_004c36cc);
  if (bVar1) {
    FUN_0044d7b0((int)&param_1);
    ExceptionList = local_c;
    return 0x7d4;
  }
  bVar1 = FUN_0043d830(&param_1,&DAT_004c36bc);
  if (bVar1) {
    FUN_0044d7b0((int)&param_1);
    ExceptionList = local_c;
    return 0x7d5;
  }
  bVar1 = FUN_0043d830(&param_1,(byte *)"EMPTY");
  if (bVar1) {
    FUN_0044d7b0((int)&param_1);
    ExceptionList = local_c;
    return 0x7d7;
  }
  bVar1 = FUN_0043d830(&param_1,(byte *)"MEDIUM");
  if (bVar1) {
    FUN_0044d7b0((int)&param_1);
    ExceptionList = local_c;
    return 0x7d6;
  }
  bVar1 = FUN_0043d830(&param_1,&DAT_004c368c);
  if (bVar1) {
    FUN_0044d7b0((int)&param_1);
    ExceptionList = local_c;
    return 0x7d8;
  }
  FUN_0044d7b0((int)&param_1);
  ExceptionList = local_c;
  return 0xffffffff;
}

