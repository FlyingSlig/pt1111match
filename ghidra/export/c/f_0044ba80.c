// FUNCTION: PORT1111 0x0044ba80
// name: FUN_0044ba80
// sig: undefined FUN_0044ba80(int * param_1)


void __fastcall FUN_0044ba80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0,0,0);
    (**(code **)(*(int *)param_1[2] + 0x98))((int *)param_1[2]);
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[2] = 0;
    }
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0044bae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CoUninitialize();
    return;
  }
  return;
}

