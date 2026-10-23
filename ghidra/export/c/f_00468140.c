// FUNCTION: PORT1111 0x00468140
// name: FUN_00468140
// sig: bool FUN_00468140(int * param_1)


bool __fastcall FUN_00468140(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xc))();
  param_1[0x3e] = (int)piVar1;
  iVar2 = FUN_00476f40(piVar1);
  return iVar2 != 0;
}

