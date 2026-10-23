// FUNCTION: PORT1111 0x00407880
// name: FUN_00407880
// sig: undefined FUN_00407880(void * param_1)


void __fastcall FUN_00407880(void *param_1)

{
  FUN_00404500((int)param_1);
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    FUN_004077b0(param_1,0);
    if (*(void **)((int)param_1 + 0x50) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)param_1 + 0x50));
    }
  }
  return;
}

