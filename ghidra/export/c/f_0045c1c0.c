// FUNCTION: PORT1111 0x0045c1c0
// name: FUN_0045c1c0
// sig: void * FUN_0045c1c0(void * this, void * param_1, int param_2)


void * __thiscall FUN_0045c1c0(void *this,void *param_1,int param_2)

{
  uchar *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (&PTR_DAT_004dc438)[*(int *)((int)this + 4) * 4];
  }
  else {
    puVar1 = (&PTR_s_verdade_004dc43c)[*(int *)((int)this + 4) * 4];
  }
  FUN_00466af0(param_1,puVar1,0xffffffff);
  return param_1;
}

