// FUNCTION: PORT1111 0x00444e70
// name: FUN_00444e70
// sig: undefined FUN_00444e70(void * this, int param_1, undefined4 param_2)


void __thiscall FUN_00444e70(void *this,int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_0043dc50(*(int *)(*(int *)((int)this + 0x18) + 0x50) + 0x270);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00444c80(this,param_1,0x7d1);
    if (param_1 == 1000) {
      *(undefined4 *)((int)this + 0x1c) = param_2;
    }
    else if ((0x407 < param_1) && (param_1 < 0x40e)) {
      *(undefined4 *)((int)this + 8) = param_2;
    }
    if (iVar2 != 0) {
      FUN_004137d0(*(int *)((int)this + 0x18));
    }
  }
  return;
}

