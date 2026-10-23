// FUNCTION: PORT1111 0x0046a070
// name: FUN_0046a070
// sig: bool FUN_0046a070(void * this, int param_1)


bool __thiscall FUN_0046a070(void *this,int param_1)

{
  int iVar1;
  
  DAT_004e2c20 = 1;
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x44);
  iVar1 = FUN_004682f0(this,param_1);
  if (iVar1 == 0) {
    OutputDebugStringA("LoadSettings Failed\n");
  }
  else {
    iVar1 = FUN_00469b00(this);
    if (iVar1 != 0) {
      iVar1 = (*(code *)**(undefined4 **)this)();
      if (iVar1 != 0) {
        iVar1 = FUN_00468160(this,(undefined4 *)((int)this + 0x38));
        return iVar1 != 0;
      }
    }
  }
  return false;
}

