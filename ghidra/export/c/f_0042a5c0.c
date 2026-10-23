// FUNCTION: PORT1111 0x0042a5c0
// name: FUN_0042a5c0
// sig: undefined FUN_0042a5c0(int param_1)


void __fastcall FUN_0042a5c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0x18);
  if (piVar3 != *(int **)(param_1 + 0x18)) {
    do {
      piVar1 = (int *)piVar3[2];
      piVar3 = (int *)*piVar3;
      iVar2 = (**(code **)(*piVar1 + 0x30))();
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x2c))();
        FUN_00489080();
        (**(code **)*piVar1)(1);
      }
    } while (piVar3 != (int *)*(int *)(param_1 + 0x18));
  }
  return;
}

