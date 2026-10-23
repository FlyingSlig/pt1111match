// FUNCTION: PORT1111 0x00405e60
// name: FUN_00405e60
// sig: undefined FUN_00405e60(void * param_1)


void __fastcall FUN_00405e60(void *param_1)

{
  void *this;
  
  this = *(void **)((int)param_1 + 0xb0);
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x2c) == 0)) {
    FUN_00444bf0(this,2);
    FUN_00405ad0(param_1,-1,-1);
    FUN_00455c40(DAT_004e2410);
    return;
  }
  return;
}

