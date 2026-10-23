// FUNCTION: PORT1111 0x00495530
// name: FUN_00495530
// sig: undefined4 FUN_00495530(void * this, undefined4 param_1, int param_2)


undefined4 __thiscall FUN_00495530(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004bab58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x28) + 4))();
  FUN_00495300((void *)((int)this + 4),&iStack_10,&param_1);
  if (iStack_10 == *(int *)((int)this + 8)) {
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0x28) + 8))();
    ExceptionList = pvStack_c;
    return 0;
  }
  puVar1 = *(undefined4 **)(*(int *)(iStack_10 + 0x10) + 0x1c);
  puVar2 = (undefined4 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      uVar3 = 0;
LAB_00495591:
      uStack_4 = 0xffffffff;
      (**(code **)(*(int *)((int)this + 0x28) + 8))();
      ExceptionList = pvStack_c;
      return uVar3;
    }
    if (puVar2[2] == param_2) {
      uVar3 = 1;
      goto LAB_00495591;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

