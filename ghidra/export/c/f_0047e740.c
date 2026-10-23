// FUNCTION: PORT1111 0x0047e740
// name: FUN_0047e740
// sig: undefined4 * FUN_0047e740(int param_1)


undefined4 * __fastcall FUN_0047e740(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_004c66d4;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 1;
    puVar1[4] = 1;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[0xb] = 0;
    puVar1[5] = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x7c))();
    if ((puVar1[3] != 0) && ((undefined4 *)puVar1[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar1[1])(1);
    }
    puVar1[1] = 0;
    puVar1[3] = 1;
    if (iVar2 != 0) {
      puVar1[3] = 0;
      puVar1[1] = iVar2;
    }
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x7c))();
    if ((puVar1[4] != 0) && ((undefined4 *)puVar1[2] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
    }
    puVar1[2] = 0;
    puVar1[4] = 1;
    if (iVar2 != 0) {
      puVar1[4] = 0;
      puVar1[2] = iVar2;
      return puVar1;
    }
    puVar1[2] = 0;
    return puVar1;
  }
  return puVar1;
}

