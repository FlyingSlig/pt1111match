// FUNCTION: PORT1111 0x0044d3a0
// name: FUN_0044d3a0
// sig: undefined FUN_0044d3a0(void * this, int param_1)


void __thiscall FUN_0044d3a0(void *this,int param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
  local_8 = *(int *)((int)this + 0xdc);
  FUN_00413aa0(this,&local_4,&local_8);
  if ((local_4 != *(int *)((int)this + 4)) && (iVar1 = *(int *)(local_4 + 0x10), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0xdc) = 3;
    FUN_0044d270(this,(char *)0x3,param_1);
    FUN_0044bc90(*(void **)(*(int *)(iVar1 + 4) + *(int *)((int)this + 0xc) * 4),0);
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    FUN_0044c1c0(this);
  }
  return;
}

