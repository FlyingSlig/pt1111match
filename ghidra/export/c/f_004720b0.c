// FUNCTION: PORT1111 0x004720b0
// name: FUN_004720b0
// sig: undefined FUN_004720b0(void * this, void * param_1)


void __thiscall FUN_004720b0(void *this,void *param_1)

{
  FUN_0046f400(this,param_1);
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_0048a1b0(param_1,(int)this + 0x98);
    FUN_0048a1b0(param_1,(int)this + 0xa0);
    return;
  }
  if (0xf802 < DAT_004e2b28) {
    FUN_0048a110(param_1,(byte *)((int)this + 0x98));
    FUN_00472050(this,*(byte *)((int)this + 0x98),*(byte *)((int)this + 0x99),
                 *(byte *)((int)this + 0x9a));
    FUN_0048a110(param_1,(int)this + 0xa0);
  }
  return;
}

