// FUNCTION: PORT1111 0x0042eab0
// name: FUN_0042eab0
// sig: undefined FUN_0042eab0(void * param_1)


void __fastcall FUN_0042eab0(void *param_1)

{
  FUN_0042e3a0((int)param_1);
  *(undefined4 *)((int)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
  FUN_0042e670(param_1);
  return;
}

