// FUNCTION: PORT1111 0x004193c0
// name: FUN_004193c0
// sig: undefined FUN_004193c0(void * param_1, int param_2, int param_3)


void __cdecl FUN_004193c0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}

