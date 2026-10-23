// FUNCTION: PORT1111 0x00472ea0
// name: FUN_00472ea0
// sig: int FUN_00472ea0(int param_1)


int __fastcall FUN_00472ea0(int param_1)

{
  undefined *puVar1;
  
  if ((*(uint *)(param_1 + 0x30) & 0x1000) == 0) {
    puVar1 = &DAT_004e2b30;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x38);
  }
  FUN_00488a80((int)puVar1);
  if (*(int *)(param_1 + 0xa4) == 0) {
    return 2;
  }
  FUN_00471e90(param_1);
  return 3 - (uint)((*(uint *)(param_1 + 0x30) & 0x100) != 0x100);
}

