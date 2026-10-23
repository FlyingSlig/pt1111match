// FUNCTION: PORT1111 0x004274f0
// name: FUN_004274f0
// sig: undefined FUN_004274f0(int param_1)


void __fastcall FUN_004274f0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  while( true ) {
    puVar1 = *(uint **)(param_1 + 0x20);
    if (puVar1 == (uint *)0x0) {
      return;
    }
    uVar3 = 0;
    if (*puVar1 == 0) break;
    piVar4 = (int *)puVar1[2];
    while (piVar2 = (int *)*piVar4, *(char *)(piVar2[0xf] + 9) == '\0') {
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      if (*puVar1 <= uVar3) {
        return;
      }
    }
    (**(code **)(*piVar2 + 0x2c))();
    FUN_00489080();
    (**(code **)*piVar2)(1);
  }
  return;
}

