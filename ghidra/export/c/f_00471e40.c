// FUNCTION: PORT1111 0x00471e40
// name: FUN_00471e40
// sig: undefined FUN_00471e40(int * param_1)


void __fastcall FUN_00471e40(int *param_1)

{
  if ((param_1[0x29] == 0) && (param_1[0x28] != 0)) {
    FUN_0047cae0((void *)param_1[0x12],param_1[0x15]);
    param_1[0x29] = 1;
    param_1[0x2a] = 0;
    FUN_00471c70((int)param_1);
    if ((param_1[0xc] & 0x2000U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00471e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x7c))();
      return;
    }
  }
  return;
}

