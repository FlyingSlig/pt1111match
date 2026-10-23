// FUNCTION: PORT1111 0x0048a560
// name: FUN_0048a560
// sig: undefined FUN_0048a560(void * param_1, uchar * param_2)


void __cdecl FUN_0048a560(void *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004baad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00466af0(&local_10,param_2,0xffffffff);
  local_4 = 0;
  uVar1 = FUN_00466490(&local_10,"<c:",0);
  uVar2 = FUN_00466490(&local_10,">",uVar1);
  while ((-1 < (int)uVar1 && (-1 < (int)uVar2))) {
    FUN_00466bc0(&local_10,uVar1,uVar2);
    uVar1 = FUN_00466490(&local_10,"<c:",0);
    uVar2 = FUN_00466490(&local_10,">",uVar1);
  }
  FUN_004670a0(&local_10,"</c>",1);
  FUN_00466a50(param_1,&local_10);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return;
}

