// FUNCTION: PORT1111 0x004966e0
// name: FUN_004966e0
// sig: undefined FUN_004966e0(undefined4 * param_1)


void __fastcall FUN_004966e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_004c6e04;
  FUN_004963d0((int)param_1);
  CloseHandle((HANDLE)param_1[10]);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[3] = 0;
  return;
}

