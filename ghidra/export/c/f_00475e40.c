// FUNCTION: PORT1111 0x00475e40
// name: FUN_00475e40
// sig: void * FUN_00475e40(undefined4 param_1, undefined4 param_2, undefined4 param_3, void * param_4, undefined1 param_5)


void * FUN_00475e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba021;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x30);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_0044df10(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}

