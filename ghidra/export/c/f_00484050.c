// FUNCTION: PORT1111 0x00484050
// name: FUN_00484050
// sig: undefined FUN_00484050(int * param_1)


void __fastcall FUN_00484050(int *param_1)

{
  FUN_00484140(param_1);
                    /* WARNING: Could not recover jumptable at 0x0048405f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[-4] + 0x18))();
  return;
}

