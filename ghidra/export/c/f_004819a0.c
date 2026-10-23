// FUNCTION: PORT1111 0x004819a0
// name: FUN_004819a0
// sig: undefined FUN_004819a0(int * param_1)


void __fastcall FUN_004819a0(int *param_1)

{
  int *piVar1;
  
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  FUN_00481930(param_1,0,0);
  piVar1 = (int *)param_1[1];
  param_1[0xb] = 0;
  if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
    FUN_00472ef0(piVar1);
  }
  piVar1 = (int *)param_1[2];
  if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
    FUN_00472ef0(piVar1);
  }
  piVar1 = (int *)param_1[3];
  if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
    FUN_00472ef0(piVar1);
  }
  (**(code **)(*param_1 + 0xc))(param_1[0xb]);
  return;
}

