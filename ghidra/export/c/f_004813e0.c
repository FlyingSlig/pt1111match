// FUNCTION: PORT1111 0x004813e0
// name: FUN_004813e0
// sig: undefined FUN_004813e0(int param_1)


void __fastcall FUN_004813e0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x78)) {
    piVar1 = *(int **)(param_1 + 4);
    if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
      FUN_00472ef0(piVar1);
    }
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
      FUN_00472ef0(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0xc);
    if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
      FUN_00472ef0(piVar1);
    }
  }
  if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x78)) {
    pvVar2 = *(void **)(param_1 + 0xc);
    if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0xa0) == 0)) {
      FUN_00471e00(pvVar2,1);
    }
    if (((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x78)) &&
        (pvVar2 = *(void **)(param_1 + 8), pvVar2 != (void *)0x0)) &&
       (*(int *)((int)pvVar2 + 0xa0) == 0)) {
      FUN_00471e00(pvVar2,1);
    }
  }
  return;
}

