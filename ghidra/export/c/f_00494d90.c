// FUNCTION: PORT1111 0x00494d90
// name: FUN_00494d90
// sig: undefined FUN_00494d90(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)


void __thiscall FUN_00494d90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *unaff_EBP;
  
  iVar2 = (**(code **)(*(int *)this + 4))(param_2,param_3);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)((int)this + 0x14);
  iVar1 = *(int *)((int)this + 0x10);
  switch(param_2) {
  case 0x25:
    FUN_004949a0(this,0);
    if ((*(int *)((int)this + 0x10) == iVar1) && (*(int *)((int)this + 0x14) == iVar2)) {
      FUN_00494760(this,-1);
    }
    break;
  case 0x26:
    FUN_00494a70(this,0);
    if ((*(int *)((int)this + 0x10) == iVar1) && (*(int *)((int)this + 0x14) == iVar2)) {
      FUN_00494880(this,-1);
    }
    break;
  case 0x27:
    FUN_004949a0(this,1);
    if ((*(int *)((int)this + 0x10) == iVar1) && (*(int *)((int)this + 0x14) == iVar2)) {
      FUN_00494760(this,1);
    }
    break;
  case 0x28:
    FUN_00494a70(this,1);
    if ((*(int *)((int)this + 0x10) == iVar1) && (*(int *)((int)this + 0x14) == iVar2)) {
      FUN_00494880(this,1);
    }
    break;
  default:
    goto switchD_00494dc2_default;
  }
  FUN_00494cb0(this,unaff_EBP,1);
switchD_00494dc2_default:
  (**(code **)(*(int *)this + 8))(param_2,param_1);
  return;
}

