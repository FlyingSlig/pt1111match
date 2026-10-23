// FUNCTION: PORT1111 0x00470760
// name: FUN_00470760
// sig: undefined FUN_00470760(void * this, void * param_1)


void __thiscall FUN_00470760(void *this,void *param_1)

{
  FUN_0046f400(this,param_1);
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_0048a210(param_1,(undefined4 *)((int)this + 0x94));
    FUN_0048a080((int)param_1);
    FUN_0048a080((int)param_1);
    FUN_0048a080((int)param_1);
    FUN_0048a080((int)param_1);
    FUN_0048a1b0(param_1,(int)this + 0xa8);
    FUN_0048a1b0(param_1,(byte *)((int)this + 0x9c));
    if ((*(byte *)((int)this + 0x9c) & 1) != 0) {
      FUN_0048a1b0(param_1,(int)this + 0xa4);
      return;
    }
  }
  else {
    FUN_0048a150(param_1,(undefined4 *)((int)this + 0x94));
    FUN_0048a070((int)param_1);
    FUN_0048a070((int)param_1);
    FUN_0048a070((int)param_1);
    FUN_0048a070((int)param_1);
    FUN_0048a110(param_1,(int *)((int)this + 0xa8));
    if (*(int *)((int)this + 0xa8) == 0) {
      *(undefined1 *)((int)this + 0xc6) = 3;
    }
    if (0xf801 < DAT_004e2b28) {
      FUN_0048a110(param_1,(byte *)((int)this + 0x9c));
      if ((*(byte *)((int)this + 0x9c) & 1) != 0) {
        FUN_0048a110(param_1,(int)this + 0xa4);
      }
    }
  }
  return;
}

