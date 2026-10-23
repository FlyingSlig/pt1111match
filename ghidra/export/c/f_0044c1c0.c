// FUNCTION: PORT1111 0x0044c1c0
// name: FUN_0044c1c0
// sig: undefined FUN_0044c1c0(void * param_1)


void __fastcall FUN_0044c1c0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  local_8 = *(int *)((int)param_1 + 0xdc);
  FUN_00413aa0(param_1,&local_4,&local_8);
  if ((((local_4 != *(int *)((int)param_1 + 4)) && (iVar1 = *(int *)(local_4 + 0x10), iVar1 != 0))
      && (*(int *)(iVar1 + 4) != 0)) &&
     (iVar3 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2, 0 < iVar3)) {
    iVar2 = *(int *)((int)param_1 + 0xc) + 1;
    if (iVar3 <= iVar2) {
      iVar2 = _rand();
      iVar2 = iVar2 % iVar3;
    }
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + iVar2 * 4) + 4))(0x100,0);
    *(int *)((int)param_1 + 0xc) = iVar2;
  }
  return;
}

