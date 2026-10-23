// FUNCTION: PORT1111 0x00454850
// name: FUN_00454850
// sig: undefined4 FUN_00454850(void * this, uint param_1)


undefined4 __thiscall FUN_00454850(void *this,uint param_1)

{
  SHORT SVar1;
  
  if ((0x30 < param_1) && (param_1 < 0x3a)) {
    SVar1 = GetKeyState(0x11);
    if (-1 < SVar1) {
      FUN_00454710(this,param_1 - 0x30);
      return 1;
    }
    FUN_004547b0(this,param_1 - 0x30);
    return 1;
  }
  return 0;
}

