// FUNCTION: PORT1111 0x0041d300
// name: FUN_0041d300
// sig: undefined FUN_0041d300(void)


void FUN_0041d300(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x140);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}

