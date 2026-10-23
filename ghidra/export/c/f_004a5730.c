// FUNCTION: PORT1111 0x004a5730
// name: FUN_004a5730
// sig: undefined FUN_004a5730(int param_1, byte * param_2)


void __cdecl FUN_004a5730(int param_1,byte *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)(param_1 + 8) == '\0')) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = ~*param_2;
      param_2 = param_2 + 1;
    }
  }
  return;
}

