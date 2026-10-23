// FUNCTION: PORT1111 0x00497a13
// name: FUN_00497a13
// sig: undefined FUN_00497a13(undefined4 * param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __fastcall FUN_00497a13(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  __lock(0xe);
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_00497a50();
  return;
}

