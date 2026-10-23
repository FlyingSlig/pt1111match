// FUNCTION: PORT1111 0x00454920
// name: FUN_00454920
// sig: undefined FUN_00454920(int param_1)


void __fastcall FUN_00454920(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffff98;
  undefined4 *in_stack_ffffff9c;
  undefined4 *puVar3;
  undefined4 local_54 [18];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8ce8;
  pvStack_c = ExceptionList;
  puVar3 = (undefined4 *)0x454944;
  ExceptionList = &pvStack_c;
  FUN_0040bc60(local_54);
  local_4 = 0;
  FUN_0040ada0(&stack0xffffff98,param_1);
  cVar1 = FUN_0040c7f0(local_54,in_stack_ffffff98,in_stack_ffffff9c,puVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0040bf80((int)local_54);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  local_4 = 0xffffffff;
  FUN_0040bcd0(local_54);
  ExceptionList = pvStack_c;
  return;
}

