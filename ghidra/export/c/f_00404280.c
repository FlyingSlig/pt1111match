// FUNCTION: PORT1111 0x00404280
// name: FUN_00404280
// sig: undefined4 FUN_00404280(void * this, int param_1, int param_2, undefined4 param_3, int param_4, int param_5)


undefined4 __thiscall
FUN_00404280(void *this,int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b58ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x34) = param_1;
  *(int *)((int)this + 0x1c) = param_2;
  puVar1 = operator_new(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_0045f0c0(puVar1);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x18) = pvVar2;
  uVar3 = FUN_0045f030(pvVar2,param_4);
  if ((char)uVar3 != '\0') {
    iVar4 = FUN_00404230(this);
    if (iVar4 != 0) {
      pvVar2 = *(void **)(*(int *)((int)this + 0x34) + 8);
      if (param_5 != -1) {
        uVar3 = (**(code **)(*(int *)this + 0x3c))
                          (param_5,*(undefined4 *)(*(int *)((int)this + 0x34) + 4));
        ExceptionList = pvVar2;
        return uVar3;
      }
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

