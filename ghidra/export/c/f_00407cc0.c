// FUNCTION: PORT1111 0x00407cc0
// name: FUN_00407cc0
// sig: int FUN_00407cc0(int param_1)


int __fastcall FUN_00407cc0(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0x40) + 0x4e) +
         *(int *)(*(int *)(param_1 + 0x50) + 0x130);
}

