// FUNCTION: PORT1111 0x004147d0
// name: FUN_004147d0
// sig: undefined4 FUN_004147d0(int param_1)


undefined4 __cdecl FUN_004147d0(int param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = (int *)FUN_00413aa0(&DAT_004e0af4,&local_4,&param_1);
  if (*piVar1 == DAT_004e0af8) {
    return 0;
  }
  return *(undefined4 *)(*piVar1 + 0x10);
}

