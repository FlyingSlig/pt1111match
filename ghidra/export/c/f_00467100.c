// FUNCTION: PORT1111 0x00467100
// name: FUN_00467100
// sig: int FUN_00467100(int * param_1)


int __fastcall FUN_00467100(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  iVar2 = (**(code **)(*param_1 + 8))();
  return iVar2 * iVar1;
}

