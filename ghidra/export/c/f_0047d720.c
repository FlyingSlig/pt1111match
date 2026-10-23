// FUNCTION: PORT1111 0x0047d720
// name: FUN_0047d720
// sig: undefined FUN_0047d720(void * this, int * param_1)


void __thiscall FUN_0047d720(void *this,int *param_1)

{
  undefined1 local_10 [16];
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x30))(local_10);
    FUN_0047d200(this,0,(undefined4 *)&stack0xffffffe4,(int)param_1);
    FUN_0047c870(this,1);
    Sleep(100);
    FUN_0047d2f0(this,0,(undefined4 *)&stack0xffffffe4);
  }
  return;
}

