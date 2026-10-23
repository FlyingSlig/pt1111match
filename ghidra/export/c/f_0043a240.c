// FUNCTION: PORT1111 0x0043a240
// name: FUN_0043a240
// sig: undefined8 FUN_0043a240(undefined4 param_1, undefined4 param_2, uint param_3)


undefined8 __fastcall FUN_0043a240(undefined4 param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  
  if ((int)param_3 < 0) {
    lVar1 = (longlong)(int)param_3 * -0x10000 + 0x8000;
    param_3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  return CONCAT44(param_2,param_3);
}

