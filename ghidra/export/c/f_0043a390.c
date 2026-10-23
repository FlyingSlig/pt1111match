// FUNCTION: PORT1111 0x0043a390
// name: FUN_0043a390
// sig: undefined4 * FUN_0043a390(void * this, int param_1)


undefined4 * __thiscall FUN_0043a390(void *this,int param_1)

{
  switch(param_1) {
  case 0x1b:
    (*(code *)**(undefined4 **)this)();
    return this;
  case 0x41:
    FUN_0043a320(-1,0);
    return this;
  case 0x44:
    FUN_0043a320(1,0);
    return this;
  case 0x57:
    FUN_0043a320(0,-1);
    return this;
  case 0x58:
    FUN_0043a320(0,1);
    return this;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    FUN_0042af00(DAT_004e2404,param_1 + -0x60);
  }
  return this;
}

