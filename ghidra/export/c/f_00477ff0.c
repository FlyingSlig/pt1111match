// FUNCTION: PORT1111 0x00477ff0
// name: FUN_00477ff0
// sig: bool FUN_00477ff0(uint param_1, uint param_2)


bool __cdecl FUN_00477ff0(uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10);
  if (*(uint *)(param_1 + 0x10) == *(uint *)(param_2 + 0x10)) {
    bVar1 = param_1 < param_2;
  }
  return bVar1;
}

