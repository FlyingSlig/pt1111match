// FUNCTION: PORT1111 0x0042e2d0
// name: FUN_0042e2d0
// sig: undefined FUN_0042e2d0(void * param_1)


void __fastcall FUN_0042e2d0(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)((int)param_1 + 0xc);
  if (piVar1 != *(int **)((int)param_1 + 0xc)) {
    do {
      FUN_0042e1c0(param_1,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)param_1 + 0xc));
  }
  piVar1 = (int *)**(int **)((int)param_1 + 0x18);
  if (piVar1 != *(int **)((int)param_1 + 0x18)) {
    do {
      FUN_0042e1c0(param_1,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)param_1 + 0x18));
  }
  return;
}

