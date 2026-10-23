// FUNCTION: PORT1111 0x00418370
// name: FUN_00418370
// sig: undefined1 FUN_00418370(void * this, int param_1)


undefined1 __thiscall FUN_00418370(void *this,int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00465cf0(&local_10);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 5) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
LAB_004183d6:
    uVar1 = (**(code **)(*(int *)this + 0xc))(uVar2);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00465e40((undefined4 *)&stack0xffffffec);
    ExceptionList = local_10;
    return uVar1;
  }
  uVar2 = FUN_00439390(param_1,&local_10);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_00436930(&DAT_004e25f8,&local_10);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0xc);
      goto LAB_004183d6;
    }
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return 0;
}

