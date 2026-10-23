// FUNCTION: PORT1111 0x0045d5d0
// name: FUN_0045d5d0
// sig: undefined FUN_0045d5d0(int param_1, int * param_2)


void __cdecl FUN_0045d5d0(int param_1,int *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b96f8;
  local_c = ExceptionList;
  iVar1 = (int)param_2 - param_1 >> 2;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < iVar1) {
    ExceptionList = &local_c;
    FUN_0045d050(param_1,iVar1,0,*param_2);
  }
  local_4 = 0xffffffff;
  FUN_0045cdf0((undefined4 *)&stack0x0000000c);
  ExceptionList = local_c;
  return;
}

