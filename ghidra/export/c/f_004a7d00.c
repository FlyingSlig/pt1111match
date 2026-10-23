// FUNCTION: PORT1111 0x004a7d00
// name: FUN_004a7d00
// sig: undefined FUN_004a7d00(void * this, int * param_1, undefined4 * param_2, undefined4 * param_3, int param_4)


void __thiscall
FUN_004a7d00(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  void *this_00;
  byte *pbVar1;
  void *extraout_ECX;
  
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_004a78a0((void *)*param_3,param_1,(byte *)0x0,(void *)*param_3);
        param_3 = param_3 + 1;
      }
    }
  }
  else if (param_3 == (undefined4 *)0x0) {
    if (param_4 != 0) {
      do {
        FUN_004a78a0(this,param_1,(byte *)*param_2,(byte *)0x0);
        param_2 = param_2 + 1;
        param_4 = param_4 + -1;
        this = extraout_ECX;
      } while (param_4 != 0);
      return;
    }
  }
  else if (param_4 != 0) {
    do {
      this_00 = (void *)*param_3;
      pbVar1 = (byte *)*param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      FUN_004a78a0(this_00,param_1,pbVar1,this_00);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    return;
  }
  return;
}

