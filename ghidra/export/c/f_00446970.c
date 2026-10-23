// FUNCTION: PORT1111 0x00446970
// name: FUN_00446970
// sig: undefined4 * FUN_00446970(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00446970(void *this,undefined4 param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8418;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004655e0(this,"Overlay Callback Object",0);
  *(undefined ***)this = &PTR_LAB_004c3ca0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_004c3c88;
  *(undefined4 *)((int)this + 0x10) = param_1;
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 4) + 4))(*(int **)((int)this + 4));
  ExceptionList = this;
  return this;
}

