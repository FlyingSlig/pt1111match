// FUNCTION: PORT1111 0x0047cb70
// name: FUN_0047cb70
// sig: undefined FUN_0047cb70(int param_1)


void __fastcall FUN_0047cb70(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x8c);
  if (piVar1 != *(int **)(param_1 + 0x8c)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x9c))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x8c));
  }
  return;
}

