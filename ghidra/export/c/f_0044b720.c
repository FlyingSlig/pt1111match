// FUNCTION: PORT1111 0x0044b720
// name: FUN_0044b720
// sig: undefined FUN_0044b720(undefined4 * param_1)


void __fastcall FUN_0044b720(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x44];
  *param_1 = &PTR_LAB_004c4434;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x44] = 0;
  }
  piVar1 = (int *)param_1[0x45];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,0,0x464,piVar1);
    (**(code **)(*(int *)param_1[0x45] + 8))((int *)param_1[0x45]);
    param_1[0x45] = 0;
  }
  param_1[2] = 0;
  return;
}

