// FUNCTION: PORT1111 0x0040a900
// name: FUN_0040a900
// sig: undefined FUN_0040a900(int param_1)


void __fastcall FUN_0040a900(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x14);
  if (piVar4 != *(int **)(param_1 + 0x14)) {
    do {
      piVar2 = (int *)FUN_00414c30(DAT_004e240c);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        iVar3 = (**(code **)(iVar1 + 0x24))();
        (**(code **)(iVar1 + 0x34))(-iVar3);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x14));
  }
  return;
}

