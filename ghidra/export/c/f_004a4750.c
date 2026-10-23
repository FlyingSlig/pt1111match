// FUNCTION: PORT1111 0x004a4750
// name: FUN_004a4750
// sig: undefined FUN_004a4750(int param_1, void * param_2)


void __cdecl FUN_004a4750(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  return;
}

