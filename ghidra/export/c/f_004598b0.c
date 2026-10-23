// FUNCTION: PORT1111 0x004598b0
// name: FUN_004598b0
// sig: undefined FUN_004598b0(void * this, undefined4 param_1)


void __thiscall FUN_004598b0(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b920b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)((int)this + 4))(1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0xc))(1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  this_00 = operator_new(8);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0043d870(&DAT_004e27cc);
    uVar2 = FUN_0045c330(this_00,*(undefined **)(iVar1 + 4));
  }
  *(undefined4 *)((int)this + 0xc) = uVar2;
  ExceptionList = pvStack_c;
  return;
}

