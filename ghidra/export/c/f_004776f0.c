// FUNCTION: PORT1111 0x004776f0
// name: FUN_004776f0
// sig: undefined FUN_004776f0(void * this, uchar * param_1, undefined4 param_2)


void __thiscall FUN_004776f0(void *this,uchar *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_00476b10(this);
  puVar1 = FUN_00477630(*(void **)(DAT_004e2b14 + 0xf8),param_1,param_2);
  *(undefined4 **)this = puVar1;
  return;
}

