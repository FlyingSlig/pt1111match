// FUNCTION: PORT1111 0x00410bc0
// name: FUN_00410bc0
// sig: undefined FUN_00410bc0(int param_1)


void __fastcall FUN_00410bc0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if ((piVar1 != (int *)0x0) && (piVar1[0x1f] == 0)) {
    (**(code **)(*piVar1 + 0xb0))(*(undefined4 *)(*(int *)(param_1 + 4) + 0x28));
  }
  FUN_00411d60(param_1);
  return;
}

