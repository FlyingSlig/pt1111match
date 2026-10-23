// FUNCTION: PORT1111 0x004443c0
// name: FUN_004443c0
// sig: undefined FUN_004443c0(undefined4 param_1, undefined4 param_2, undefined1 * param_3)


void FUN_004443c0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 2) = *param_3;
  }
  return;
}

