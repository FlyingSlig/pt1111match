// FUNCTION: PORT1111 0x0045f060
// name: FUN_0045f060
// sig: bool FUN_0045f060(int param_1)


bool __fastcall FUN_0045f060(int param_1)

{
  return (bool)('\x01' - (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)));
}

