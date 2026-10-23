// FUNCTION: PORT1111 0x00496310
// name: FUN_00496310
// sig: undefined FUN_00496310(int param_1)


void __fastcall FUN_00496310(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x40) != 0)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return;
}

