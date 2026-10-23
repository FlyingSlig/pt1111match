// FUNCTION: PORT1111 0x0047b1c0
// name: FUN_0047b1c0
// sig: void * FUN_0047b1c0(void * param_1)


void * __fastcall FUN_0047b1c0(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  FUN_0047b0f0(param_1,100);
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  ExceptionList = local_c;
  return param_1;
}

