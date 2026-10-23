// FUNCTION: PORT1111 0x0044bbc0
// name: FUN_0044bbc0
// sig: undefined FUN_0044bbc0(undefined4 * param_1)


void __fastcall FUN_0044bbc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_004c44b8;
  if (param_1[1] != 0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1,param_1[1]);
    }
    if (param_1[5] != 0) {
      piVar1 = (int *)param_1[1];
      if (param_1[4] == 0) {
        (**(code **)(*piVar1 + 0x78))(piVar1,param_1[3]);
      }
      else {
        (**(code **)(*piVar1 + 0x78))(piVar1,param_1[4]);
      }
    }
    piVar1 = (int *)param_1[4];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[4] = 0;
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
  }
  param_1[3] = 0;
  return;
}

