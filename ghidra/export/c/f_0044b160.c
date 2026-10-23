// FUNCTION: PORT1111 0x0044b160
// name: FUN_0044b160
// sig: undefined4 FUN_0044b160(void * param_1)


undefined4 __fastcall FUN_0044b160(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 8) != 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0x110) + 0x24))(*(int **)((int)param_1 + 0x110));
    if (-1 < iVar1) {
      FUN_0044b0b0(param_1,0);
      *(undefined4 *)((int)param_1 + 8) = 1;
      return 1;
    }
  }
  return 0;
}

