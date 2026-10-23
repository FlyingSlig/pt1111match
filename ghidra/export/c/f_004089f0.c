// FUNCTION: PORT1111 0x004089f0
// name: FUN_004089f0
// sig: undefined FUN_004089f0(void)


void FUN_004089f0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}

