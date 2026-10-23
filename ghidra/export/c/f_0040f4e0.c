// FUNCTION: PORT1111 0x0040f4e0
// name: FUN_0040f4e0
// sig: int FUN_0040f4e0(void * param_1)


int __fastcall FUN_0040f4e0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0047fd20(*(int *)((int)param_1 + 0x18));
  iVar2 = FUN_004048d0(param_1,iVar1);
  return iVar1 - *(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x50) + 0x138 + iVar2 * 4);
}

