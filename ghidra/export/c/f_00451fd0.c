// FUNCTION: PORT1111 0x00451fd0
// name: FUN_00451fd0
// sig: undefined FUN_00451fd0(int param_1)


void __fastcall FUN_00451fd0(int param_1)

{
  FUN_00453580(param_1);
  SetRect((LPRECT)(param_1 + 0x60),0,0,*(int *)(param_1 + 0x24),
          *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
  return;
}

