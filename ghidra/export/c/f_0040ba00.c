// FUNCTION: PORT1111 0x0040ba00
// name: FUN_0040ba00
// sig: int FUN_0040ba00(int param_1)


int __fastcall FUN_0040ba00(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00497d88();
  return (int)uVar1 + *(int *)(param_1 + 0x28) + *(int *)(param_1 + 8);
}

