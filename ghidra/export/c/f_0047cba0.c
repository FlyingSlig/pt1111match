// FUNCTION: PORT1111 0x0047cba0
// name: FUN_0047cba0
// sig: undefined4 FUN_0047cba0(int param_1)


undefined4 __fastcall FUN_0047cba0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x34) != 0)) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    piVar2 = (int *)**(int **)(param_1 + 0x8c);
    if (piVar2 != *(int **)(param_1 + 0x8c)) {
      do {
        iVar1 = (**(code **)(*(int *)piVar2[2] + 0x50))();
        if (iVar1 == 0) {
          return 0;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x8c));
    }
    piVar2 = (int *)**(int **)(param_1 + 0x70);
    if (piVar2 != *(int **)(param_1 + 0x70)) {
      do {
        iVar1 = FUN_0047cba0(piVar2[2]);
        if (iVar1 == 0) {
          return 0;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x70));
    }
    return 1;
  }
  return 0;
}

