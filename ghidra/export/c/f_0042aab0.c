// FUNCTION: PORT1111 0x0042aab0
// name: FUN_0042aab0
// sig: undefined4 FUN_0042aab0(int param_1)


undefined4 __cdecl FUN_0042aab0(int param_1)

{
  int local_4;
  
  FUN_00413aa0(&DAT_004e2174,&local_4,&param_1);
  if (local_4 != DAT_004e2178) {
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

