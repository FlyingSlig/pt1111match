// FUNCTION: PORT1111 0x0042c3a0
// name: FUN_0042c3a0
// sig: undefined FUN_0042c3a0(undefined4 param_1)


void __cdecl FUN_0042c3a0(undefined4 param_1)

{
  if ((DAT_004e2168 != 0) &&
     ((uint)((int)DAT_004e216c - DAT_004e2168 >> 2) < (uint)(DAT_004e2170 - DAT_004e2168 >> 2))) {
    *DAT_004e216c = param_1;
    DAT_004e216c = DAT_004e216c + 1;
    return;
  }
  FUN_0042b7d0(&DAT_004e2164,DAT_004e216c,1,&param_1);
  return;
}

