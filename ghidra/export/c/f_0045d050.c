// FUNCTION: PORT1111 0x0045d050
// name: FUN_0045d050
// sig: undefined FUN_0045d050(int param_1, int param_2, int param_3, int param_4)


void __cdecl FUN_0045d050(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  while ((param_3 < param_2 &&
         (iVar1 = (param_2 + -1) / 2,
         *(int *)(param_4 + 0x5c) < *(int *)(*(int *)(param_1 + iVar1 * 4) + 0x5c)))) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    param_2 = iVar1;
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  FUN_0045cdf0((undefined4 *)&stack0x00000014);
  return;
}

