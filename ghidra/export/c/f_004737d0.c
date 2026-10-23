// FUNCTION: PORT1111 0x004737d0
// name: FUN_004737d0
// sig: undefined FUN_004737d0(void * this, uchar * param_1)


void __thiscall FUN_004737d0(void *this,uchar *param_1)

{
  int *this_00;
  
  if (param_1 != (uchar *)0x0) {
    this_00 = (int *)((int)this + 0x94);
    FUN_00466a40(this_00,param_1);
    FUN_00466b70(this_00);
    FUN_00465d10(this_00);
    FUN_00473200(this);
    return;
  }
  FUN_00465e40((undefined4 *)((int)this + 0x94));
  FUN_00473200(this);
  return;
}

