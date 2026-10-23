// FUNCTION: PORT1111 0x0044baf0
// name: FUN_0044baf0
// sig: int * FUN_0044baf0(int param_1)


int * __fastcall FUN_0044baf0(int param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return (int *)0x0;
  }
  piVar1 = *(int **)(param_1 + 8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,&local_4);
  return piVar1;
}

