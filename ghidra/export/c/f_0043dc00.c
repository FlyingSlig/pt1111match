// FUNCTION: PORT1111 0x0043dc00
// name: FUN_0043dc00
// sig: char * FUN_0043dc00(int param_1, int param_2)


char * FUN_0043dc00(int param_1,int param_2)

{
  int iVar1;
  int local_4;
  
  FUN_00413aa0(&DAT_004e27cc,&local_4,&param_1);
  if ((local_4 != DAT_004e27d0) && (iVar1 = *(int *)(local_4 + 0x10), iVar1 != 0)) {
    if (param_2 != 0) {
      return *(char **)(iVar1 + 8);
    }
    return *(char **)(iVar1 + 0xc);
  }
  return "UNKNOWN";
}

