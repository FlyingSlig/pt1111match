// FUNCTION: PORT1111 0x0049ffd8
// name: FUN_0049ffd8
// sig: int * FUN_0049ffd8(void)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int * FUN_0049ffd8(void)

{
  _ptiddata p_Var1;
  int *_Memory;
  
  __lock(0xd);
  p_Var1 = __getptd();
  _Memory = p_Var1->_tpxcptinfoptrs;
  if (_Memory != DAT_004e31f4) {
    if ((_Memory != (int *)0x0) && (*_Memory = *_Memory + -1, *_Memory == 0)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = DAT_004e31f4;
    _Memory = DAT_004e31f4;
    *DAT_004e31f4 = *DAT_004e31f4 + 1;
  }
  FUN_004a003e();
  return _Memory;
}

