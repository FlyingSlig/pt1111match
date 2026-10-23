// FUNCTION: PORT1111 0x00407bb0
// name: FUN_00407bb0
// sig: undefined FUN_00407bb0(int * param_1)


void __fastcall FUN_00407bb0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041eb00((int)param_1);
  switch(iVar1) {
  case 0:
    (**(code **)(*param_1 + 0x18))();
    break;
  case 1:
    (**(code **)(*param_1 + 0x18))();
  case 2:
  case 3:
    FUN_0041ebe0((int)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00407be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

