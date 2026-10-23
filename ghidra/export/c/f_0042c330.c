// FUNCTION: PORT1111 0x0042c330
// name: FUN_0042c330
// sig: undefined FUN_0042c330(int param_1)


void __cdecl FUN_0042c330(int param_1)

{
  int iVar1;
  
  if (DAT_004e2158 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_004e215c - DAT_004e2158 >> 2;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  if ((DAT_004e2158 != 0) &&
     ((uint)((int)DAT_004e215c - DAT_004e2158 >> 2) < (uint)(DAT_004e2160 - DAT_004e2158 >> 2))) {
    *DAT_004e215c = param_1;
    DAT_004e215c = DAT_004e215c + 1;
    return;
  }
  FUN_0042b7d0(&DAT_004e2154,DAT_004e215c,1,&param_1);
  return;
}

