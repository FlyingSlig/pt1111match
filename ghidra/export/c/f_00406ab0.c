// FUNCTION: PORT1111 0x00406ab0
// name: FUN_00406ab0
// sig: int FUN_00406ab0(byte param_1)


int __cdecl FUN_00406ab0(byte param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_1 & 1) != 0) && ((param_1 & 0x10) != 0)) {
    iVar1 = 3;
  }
  if (((param_1 & 4) != 0) && ((param_1 & 0x40) != 0)) {
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 4;
  }
  if (((param_1 & 2) != 0) && ((param_1 & 0x20) != 0)) {
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 2;
  }
  if ((param_1 & 8) == 0) {
    return iVar1;
  }
  if (-1 < (char)param_1) {
    return iVar1;
  }
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}

