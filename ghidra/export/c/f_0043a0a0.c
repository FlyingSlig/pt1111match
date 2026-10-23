// FUNCTION: PORT1111 0x0043a0a0
// name: FUN_0043a0a0
// sig: undefined4 FUN_0043a0a0(int param_1)


undefined4 __cdecl FUN_0043a0a0(int param_1)

{
  return *(undefined4 *)(&DAT_004d7a88 + ((param_1 * 0x28be >> 8) + 0x80U >> 8 & 0xff) * 4);
}

