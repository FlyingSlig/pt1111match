// FUNCTION: PORT1111 0x00473fe0
// name: FUN_00473fe0
// sig: undefined FUN_00473fe0(void * this, uint param_1)


void __thiscall FUN_00473fe0(void *this,uint param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f68;
  local_c = ExceptionList;
  if (0x3fffffffU - *(int *)((int)this + 8) < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_004016b0(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_004017e0(local_34,local_50);
    local_34[0] = &PTR_FUN_004c6e20;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_004cc884);
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  return;
}

