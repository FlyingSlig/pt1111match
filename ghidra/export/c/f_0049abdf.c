// FUNCTION: PORT1111 0x0049abdf
// name: FUN_0049abdf
// sig: undefined FUN_0049abdf(void)


void FUN_0049abdf(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_purecall) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)((int)p_Var1->_purecall + -1);
  }
  return;
}

