// FUNCTION: PORT1111 0x0045d0a0
// name: FUN_0045d0a0
// sig: undefined FUN_0045d0a0(int param_1, int param_2, int param_3, int param_4)


void __cdecl FUN_0045d0a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b96b8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar2 = param_2;
  ExceptionList = &local_c;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(int *)(*(int *)(param_1 + -4 + iVar1 * 4) + 0x5c) <
        *(int *)(*(int *)(param_1 + iVar1 * 4) + 0x5c)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_0045d050(param_1,iVar2,param_2,param_4);
  local_4 = 0xffffffff;
  FUN_0045cdf0((undefined4 *)&stack0x00000014);
  ExceptionList = local_c;
  return;
}

