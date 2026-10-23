// FUNCTION: PORT1111 0x0045a460
// name: FUN_0045a460
// sig: void * FUN_0045a460(void * param_1)


void * __cdecl FUN_0045a460(void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b92f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)FUN_00465cf0(&local_10);
  local_4 = 1;
  puVar2 = FUN_00466970(pvVar1,&DAT_004c4654);
  FUN_00466b20(param_1,puVar2);
  local_4 = local_4 & 0xffffff00;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return param_1;
}

