// FUNCTION: PORT1111 0x00441930
// name: FUN_00441930
// sig: undefined FUN_00441930(int param_1)


void __fastcall FUN_00441930(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x34);
  if (piVar2 != *(int **)(param_1 + 0x34)) {
    do {
      FUN_00414e10(DAT_004e240c,piVar2[2]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x34));
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (_Memory == *(void **)(param_1 + 0x34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

