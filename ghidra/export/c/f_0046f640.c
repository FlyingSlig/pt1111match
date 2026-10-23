// FUNCTION: PORT1111 0x0046f640
// name: FUN_0046f640
// sig: undefined FUN_0046f640(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)


void __thiscall
FUN_0046f640(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  CRect::NormalizeRect((CRect *)&param_1);
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_004786d0(*(void **)((int)this + 0x40),param_1,param_2);
  }
  return;
}

