// FUNCTION: PORT1111 0x00472560
// name: FUN_00472560
// sig: undefined4 FUN_00472560(void * this, uchar * param_1, int param_2)


undefined4 __thiscall FUN_00472560(void *this,uchar *param_1,int param_2)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(int *)((int)this + 0xb4) = param_2;
  }
  FUN_00405130();
  FUN_00466af0(&param_2,param_1,0xffffffff);
  local_4 = 0;
  if (param_1 == (uchar *)0x0) {
    FUN_00465e40(&param_2);
  }
  else {
    FUN_00466a40(&param_2,param_1);
    FUN_00465e70(&param_2,'\\');
  }
  iVar1 = thunk_FUN_00466240(&param_2,"");
  if (iVar1 != 0) {
    FUN_00465e40((undefined4 *)((int)this + 0xa4));
    (**(code **)(*(int *)this + 0x1c))();
    if (*(int *)((int)this + 0x44) != 0) {
      if (*(void **)((int)this + 0x40) != (void *)0x0) {
        FUN_00478470(*(void **)((int)this + 0x40),*(int *)(*(int *)((int)this + 0x44) + 0x34),0);
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x44) + 0x34);
      piVar3 = (int *)0x0;
      this_00 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
      FUN_00476d40(this_00,iVar1,piVar3);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
    local_4 = 0xffffffff;
    FUN_00465e40(&param_2);
    ExceptionList = local_c;
    return 1;
  }
  FUN_00466a50((undefined4 *)((int)this + 0xa4),&param_2);
  uVar2 = FUN_00472490(this,1);
  local_4 = 0xffffffff;
  FUN_00465e40(&param_2);
  ExceptionList = local_c;
  return uVar2;
}

