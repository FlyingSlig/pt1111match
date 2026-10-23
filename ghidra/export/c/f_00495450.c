// FUNCTION: PORT1111 0x00495450
// name: FUN_00495450
// sig: undefined4 FUN_00495450(void * this, undefined4 param_1, void * param_2, undefined4 * param_3, int param_4)


undefined4 __thiscall
FUN_00495450(void *this,undefined4 param_1,void *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iStack_18;
  undefined **local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004bab38;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x28);
  local_14 = &PTR_FUN_004c376c;
  ExceptionList = &pvStack_c;
  local_10 = piVar1;
  (**(code **)(*(int *)((int)this + 0x28) + 4))();
  uStack_4 = 0;
  FUN_00495300((void *)((int)this + 4),&iStack_18,&param_1);
  if (iStack_18 != *(int *)((int)this + 8)) {
    FUN_00466a50(param_2,(undefined4 *)(*(int *)(iStack_18 + 0x10) + 0x14));
    *param_3 = *(undefined4 *)(*(int *)(iStack_18 + 0x10) + 0x30);
    if (param_4 != 0) {
      FUN_004952a0(*(void **)(iStack_18 + 0x10),param_4);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar1 + 8))();
    ExceptionList = pvStack_c;
    return 1;
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar1 + 8))();
  ExceptionList = pvStack_c;
  return 0;
}

