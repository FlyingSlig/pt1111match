// FUNCTION: PORT1111 0x00401b40
// name: FUN_00401b40
// sig: exception * FUN_00401b40(void * this, exception * param_1)


exception * __thiscall FUN_00401b40(void *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(this,param_1);
  *(undefined ***)this = &PTR_FUN_004c6e14;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_004015c0((void *)((int)this + 0xc),param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

