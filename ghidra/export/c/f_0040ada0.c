// FUNCTION: PORT1111 0x0040ada0
// name: FUN_0040ada0
// sig: void * FUN_0040ada0(void * this, int param_1)


void * __thiscall FUN_0040ada0(void *this,int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b5c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_0043d220();
  *(int **)((int)this + 4) = piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_0040ac50(this,*piVar1,(undefined4 *)**(undefined4 **)(param_1 + 4),
               *(undefined4 **)(param_1 + 4));
  ExceptionList = local_10;
  return this;
}

