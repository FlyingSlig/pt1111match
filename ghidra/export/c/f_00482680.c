// FUNCTION: PORT1111 0x00482680
// name: FUN_00482680
// sig: undefined FUN_00482680(void)


void FUN_00482680(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}

