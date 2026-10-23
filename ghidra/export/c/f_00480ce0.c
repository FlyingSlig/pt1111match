// FUNCTION: PORT1111 0x00480ce0
// name: FUN_00480ce0
// sig: undefined FUN_00480ce0(int * param_1)


void __fastcall FUN_00480ce0(int *param_1)

{
  DWORD DVar1;
  
  if (param_1[0x10] != 0) {
    DVar1 = GetTickCount();
    if ((uint)param_1[0x10] < DVar1 - param_1[0xf]) {
                    /* WARNING: Could not recover jumptable at 0x00480d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
  }
  return;
}

