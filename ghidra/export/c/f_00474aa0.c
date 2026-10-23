// FUNCTION: PORT1111 0x00474aa0
// name: FUN_00474aa0
// sig: undefined FUN_00474aa0(int param_1, int param_2, int * param_3)


void __cdecl FUN_00474aa0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  iVar1 = param_2;
  while (param_1 != iVar1) {
    *piVar2 = *piVar2 + 1;
    FUN_004746b0(&param_1);
  }
  return;
}

