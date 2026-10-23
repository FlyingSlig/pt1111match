// FUNCTION: PORT1111 0x0047f9b0
// name: FUN_0047f9b0
// sig: char FUN_0047f9b0(int * param_1)


char __fastcall FUN_0047f9b0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xc))();
  if (cVar1 == '\x10') {
    return (*(int *)(param_1[10] + 0x10) == 3) + '\x0f';
  }
                    /* WARNING: Could not recover jumptable at 0x0047f9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cVar1 = (**(code **)(*param_1 + 0xc))();
  return cVar1;
}

