// FUNCTION: PORT1111 0x0043a130
// name: FUN_0043a130
// sig: undefined8 FUN_0043a130(undefined4 param_1, undefined4 param_2, int param_3)


undefined8 __fastcall FUN_0043a130(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0xa2f958 + 0x8000;
  return CONCAT44(param_2,*(undefined4 *)
                           (&DAT_004d9290 +
                           ((int)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                                 0x8000) >> 0x10 & 0x3ffU) * 4));
}

