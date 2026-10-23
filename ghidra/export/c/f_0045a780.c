// FUNCTION: PORT1111 0x0045a780
// name: FUN_0045a780
// sig: undefined FUN_0045a780(void * this, uint param_1, int param_2)


void __thiscall FUN_0045a780(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *this_00;
  
  iVar1 = FUN_00457ca0(*(void **)(*(int *)((int)this + 0xd0) + 0x10),param_1);
  this_00 = (void *)FUN_00484bd0(iVar1);
  *(undefined4 *)((int)this + 0xd4) = 1;
  iVar1 = FUN_00457c20((int)this_00);
  if (iVar1 == 1) {
    FUN_00457cd0(*(void **)(*(int *)((int)this + 0xd0) + 0x10),param_1);
  }
  else {
    FUN_00457850(this_00,param_2);
  }
  iVar1 = FUN_00457c20(*(int *)(*(int *)((int)this + 0xd0) + 0x10));
  iVar1 = iVar1 + -3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FUN_00481930((void *)((int)this + 0x4c),0,iVar1);
  return;
}

